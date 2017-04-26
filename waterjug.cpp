#include <cstdio>
#include <stack>
#include <map>
#include <algorithm>
using namespace std;

// Representasi state (x, y)
// x dan y adalah nilai dari kapasitas galon
struct state {
    int x, y;

    // Digunakan 'map' untuk mengecek masing massing state
    bool operator < (const state& that) const {
        if (x != that.x) return x < that.x;
        return y < that.y;
    }
};

// Kapasitas kedua galon dan goal state yang dicari
int capacity_x, capacity_y, target;

void dfs(state start, stack <pair <state, int> >& path)   {
    stack <state> s;
    state goal = (state) {-1, -1};

    // Menyimpan states yang sudah di lookup pada map
    map <state, pair <state, int> > parentOf;

    s.push(start);
    parentOf[start] = make_pair(start, 0);

    while (!s.empty())    {
        // Mengambil state pada stack terdepan
        state top = s.top();
        s.pop();

        // Jika goal state yang dicari sudah ditemukan, berhenti
        if (top.x == target || top.y == target) {
            goal = top;
            break;
        }

        // Mencari next states
        // Langkah ini menggunakan production rules untuk menentukan next states nya

        // Rule 1: (x, y) -> (capacity_x, y) if x < capacity_x
        // Isi galon 1
        if (top.x < capacity_x)  {
            state child = (state) {capacity_x, top.y};
            // asumsikan state ini belum dipakai sebelumnya
            if (parentOf.find(child) == parentOf.end()) {
                s.push(child);
                parentOf[child] = make_pair(top, 1);
            }
        }

        // Rule 2: (x, y) -> (x, capacity_y) if y < capacity_y
        // Isi galon2
        if (top.y < capacity_y)  {
            state child = (state) {top.x, capacity_y};
            if (parentOf.find(child) == parentOf.end()) {
                s.push(child);
                parentOf[child] = make_pair(top, 2);
            }
        }

        // Rule 3: (x, y) -> (0, y) if x > 0
        // Kosongkan galon 1
        if (top.x > 0)  {
            state child = (state) {0, top.y};
            if (parentOf.find(child) == parentOf.end()) {
                s.push(child);
                parentOf[child] = make_pair(top, 3);
            }
        }

        // Rule 4: (x, y) -> (x, 0) if y > 0
        // Kosongkan galon 2
        if (top.y > 0)  {
            state child = (state) {top.x, 0};
            if (parentOf.find(child) == parentOf.end()) {
                s.push(child);
                parentOf[child] = make_pair(top, 4);
            }
        }

        // Rule 5: (x, y) -> (min(x + y, capacity_x), max(0, x + y - capacity_x)) if y > 0
        // Tuang galon j2 ke galon j1 sampai galon j1 penuh atau galon j2 habis
        if (top.y > 0)  {
            state child = (state) {min(top.x + top.y, capacity_x), max(0, top.x + top.y - capacity_x)};
            if (parentOf.find(child) == parentOf.end()) {
                s.push(child);
                parentOf[child] = make_pair(top, 5);
            }
        }

        // Rule 6: (x, y) -> (max(0, x + y - capacity_y), min(x + y, capacity_y)) if x > 0
        // Tuang galon j1 ke galon j2 sampai galon j2 penuh atau galon j1 habis
        if (top.x > 0)  {
            state child = (state) {max(0, top.x + top.y - capacity_y), min(top.x + top.y, capacity_y)};
            if (parentOf.find(child) == parentOf.end()) {
                s.push(child);
                parentOf[child] = make_pair(top, 6);
            }
        }
    }

    // Goal states tidak ditemukan
    if (goal.x == -1 || goal.y == -1)
        return;

    // Melihat kembali jalur yang diambil dalam mendapatkan state spaces
    path.push(make_pair(goal, 0));
    while (parentOf[path.top().first].second != 0)
        path.push(parentOf[path.top().first]);
}

int main()  {
    stack <pair <state, int> > path;

    printf("Masukkan kapasitas dari kedua galon : ");
    scanf("%d %d", &capacity_x, &capacity_y);
    printf("Masukkan nilai goal states yang ingin dicari : ");
    scanf("%d", &target);

    dfs((state) {0, 0}, path);
    if (path.empty())
        printf("\nGoal states tidak ditemukan\n");
    else    {
        printf("\nBanyaknya langkah untuk mencapai goal states : %d\njalur seperti berikut :\n", path.size() - 1);
        while (!path.empty())   {
            state top = path.top().first;
            int rule = path.top().second;
            path.pop();

            switch (rule)   {
                case 0: printf("State : (%d, %d)\n#\n", top.x, top.y);
                        break;
                case 1: printf("State : (%d, %d)\nAction : Isi galon 1\n", top.x, top.y);
                        break;
                case 2: printf("State : (%d, %d)\nAction : Isi galon 2\n", top.x, top.y);
                        break;
                case 3: printf("State : (%d, %d)\nAction : Kosongkan galon 1\n", top.x, top.y);
                        break;
                case 4: printf("State : (%d, %d)\nAction : Kosongkan galon 2\n", top.x, top.y);
                        break;
                case 5: printf("State : (%d, %d)\nAction : Tuang galon 2 ke galon 1\n", top.x, top.y);
                        break;
                case 6: printf("State : (%d, %d)\nAction : Tuang galon 1 ke galon 2\n", top.x, top.y);
                        break;
            }
        }
    }

    return 0;
}