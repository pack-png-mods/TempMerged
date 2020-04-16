#ifndef SEED_TESTER_GENERATOR_H
#define SEED_TESTER_GENERATOR_H

#include "random.h"
#include <cstdint>

namespace generator
{

    class ChunkGenerator
    {
    private:
        static bool isValidTreeSpot(int treeX, int treeZ, bool firstTreeFound, bool secondTreeFound, int waterfallX);
        static void generateLeafPattern(random_math::JavaRand& random, bool *out);
        static void ignoreLeafPattern(random_math::JavaRand& random);
        static bool leafPatternNot0And4(random_math::JavaRand& random);
        static int32_t checkTrees(random_math::JavaRand& random, int32_t maxTreeCount, int waterfallX);
    public:
        static void init();
        static random_math::LCG advance_3;
        static random_math::LCG advance_11;
        static random_math::LCG advance_16;
        static random_math::LCG advance_3759;
        static bool populate(int64_t chunkSeed, int waterfallX);

    };
}


#endif //SEED_TESTER_GENERATOR_H
