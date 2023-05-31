#include <vector>
using namespace std;
namespace ariel{
    class MagicalContainer{
        public:
            MagicalContainer(){};
            MagicalContainer(MagicalContainer&){};
            class AscendingIterator{
              public:
                int val=10;
                AscendingIterator(MagicalContainer&){};
                int& operator*(){return val;}
                bool operator==(const AscendingIterator& otherIter) const {return true;}
                bool operator>(const AscendingIterator& otherIter) const {return true;}
                bool operator<(const AscendingIterator& otherIter) const {return true;}
                bool operator!=(const AscendingIterator& otherIter) const {return false;}
                AscendingIterator& operator++() {MagicalContainer a;
                AscendingIterator * b = new AscendingIterator(a); return *b; }
                AscendingIterator begin(){MagicalContainer a; return AscendingIterator(a);};
                AscendingIterator end(){MagicalContainer a; return AscendingIterator(a);};

            };
            class PrimeIterator{
             public:
                int val=10;
                PrimeIterator(MagicalContainer&){};
                int& operator*(){return val;}
                bool operator==(const PrimeIterator& otherIter) const {return true;}
                bool operator>(const PrimeIterator& otherIter) const {return true;}
                bool operator<(const PrimeIterator& otherIter) const {return true;}
                bool operator!=(const PrimeIterator& otherIter) const {return false;}
                PrimeIterator& operator++() {MagicalContainer a;
                PrimeIterator * b = new PrimeIterator(a); return *b; }
                PrimeIterator begin(){MagicalContainer a; return PrimeIterator(a);};
                PrimeIterator end(){MagicalContainer a; return PrimeIterator(a);};
            };
            class SideCrossIterator{
             public:
                int val=10;
                SideCrossIterator(MagicalContainer&){};
                int& operator*(){return val;}
                bool operator==(const SideCrossIterator& otherIter) const {return true;}
                bool operator>(const SideCrossIterator& otherIter) const {return true;}
                bool operator<(const SideCrossIterator& otherIter) const {return true;}
                bool operator!=(const SideCrossIterator& otherIter) const {return false;}
                SideCrossIterator& operator++() {MagicalContainer a;
                SideCrossIterator * b = new SideCrossIterator(a); return *b; }
                SideCrossIterator begin(){MagicalContainer a; return SideCrossIterator(a);};
                SideCrossIterator end(){MagicalContainer a; return SideCrossIterator(a);};
            };
            int size(){return 10;};
            void removeElement(int){};
            void addElement(int){};
            ~MagicalContainer(){};
        private:
            vector<int> elements;

    };
}
