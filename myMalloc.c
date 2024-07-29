
zkhaval@data:~$ cd cs252
zkhaval@data:~/cs252$ cd lab1-src
zkhaval@data:~/cs252/lab1-src$ ./tests/expected/test_simple2
TEST: test_simple2.c
INTIAL STATE

FREELIST
L58: [
	addr: 0016
	size: 992
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]

TAGS
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 992
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 1008
	size: 16
	left_size: 992
	allocated: fencepost
]

---- Running test1-2 ---
Before any allocation
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 992
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 1008
	size: 16
	left_size: 992
	allocated: fencepost
]
mallocing 8 bytes
[F][U][A][F]
mem1 = malloc(8)
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 960
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 0976
	size: 32
	left_size: 960
	allocated: true
]
[
	addr: 1008
	size: 16
	left_size: 32
	allocated: fencepost
]
mallocing 8 bytes
[F][U][A][A][F]
mem2 = malloc(8)
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 928
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 0944
	size: 32
	left_size: 928
	allocated: true
]
[
	addr: 0976
	size: 32
	left_size: 32
	allocated: true
]
[
	addr: 1008
	size: 16
	left_size: 32
	allocated: fencepost
]
mallocing 8 bytes
[F][U][A][A][A][F]
mem3 = malloc(8)
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 896
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 0912
	size: 32
	left_size: 896
	allocated: true
]
[
	addr: 0944
	size: 32
	left_size: 32
	allocated: true
]
[
	addr: 0976
	size: 32
	left_size: 32
	allocated: true
]
[
	addr: 1008
	size: 16
	left_size: 32
	allocated: fencepost
]
FINAL STATE

FREELIST
L58: [
	addr: 0016
	size: 896
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]

TAGS
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 896
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 0912
	size: 32
	left_size: 896
	allocated: true
]
[
	addr: 0944
	size: 32
	left_size: 32
	allocated: true
]
[
	addr: 0976
	size: 32
	left_size: 32
	allocated: true
]
[
	addr: 1008
	size: 16
	left_size: 32
	allocated: fencepost
]
zkhaval@data:~/cs252/lab1-src$ ./tests/expected/test_simple3
TEST: test_simple3.c
INTIAL STATE

FREELIST
L58: [
	addr: 0016
	size: 992
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]

TAGS
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 992
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 1008
	size: 16
	left_size: 992
	allocated: fencepost
]
Before any allocation
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 992
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 1008
	size: 16
	left_size: 992
	allocated: fencepost
]
mallocing 8 bytes
[F][U][A][F]
mem1 = malloc(8)
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 960
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 0976
	size: 32
	left_size: 960
	allocated: true
]
[
	addr: 1008
	size: 16
	left_size: 32
	allocated: fencepost
]
mallocing 8 bytes
[F][U][A][A][F]
mem2 = malloc(8)
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 928
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 0944
	size: 32
	left_size: 928
	allocated: true
]
[
	addr: 0976
	size: 32
	left_size: 32
	allocated: true
]
[
	addr: 1008
	size: 16
	left_size: 32
	allocated: fencepost
]
mallocing 8 bytes
[F][U][A][A][A][F]
mem3 = malloc(8)
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 896
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 0912
	size: 32
	left_size: 896
	allocated: true
]
[
	addr: 0944
	size: 32
	left_size: 32
	allocated: true
]
[
	addr: 0976
	size: 32
	left_size: 32
	allocated: true
]
[
	addr: 1008
	size: 16
	left_size: 32
	allocated: fencepost
]
freeing 8 bytes (0928)
[F][U][A][U][A][F]
free(mem2))
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 896
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 0912
	size: 32
	left_size: 896
	allocated: true
]
[
	addr: 0944
	size: 32
	left_size: 32
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 0976
	size: 32
	left_size: 32
	allocated: true
]
[
	addr: 1008
	size: 16
	left_size: 32
	allocated: fencepost
]
FINAL STATE

FREELIST
L1: [
	addr: 0944
	size: 32
	left_size: 32
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]

L58: [
	addr: 0016
	size: 896
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]

TAGS
[
	addr: 0000
	size: 16
	left_size: 16
	allocated: fencepost
]
[
	addr: 0016
	size: 896
	left_size: 16
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 0912
	size: 32
	left_size: 896
	allocated: true
]
[
	addr: 0944
	size: 32
	left_size: 32
	allocated: false
	prev: SENTINEL
	next: SENTINEL
]
[
	addr: 0976
	size: 32
	left_size: 32
	allocated: true
]
[
	addr: 1008
	size: 16
	left_size: 32
	allocated: fencepost
]
zkhaval@data:~/cs252/lab1-src$ ./runtest.py
SUITE: Simple Tests 20 pts
mkfifo: cannot create fifo 'testPipe': File exists
mkfifo: cannot create fifo 'expectedPipe': File exists
	TEST: test_simple0 PASSED 2
	TEST: test_simple1 FAILED 3
	TEST: test_simple2 FAILED 3
	TEST: test_simple3 FAILED 3
	TEST: test_simple4 FAILED 3
./utils/difftest.sh: line 16: 4081121 Segmentation fault      timeout $TIMEOUT tests/$testname > testPipe 2>&1
	TEST: test_simple5 FAILED 3
./utils/difftest.sh: line 16: 4081133 Segmentation fault      timeout $TIMEOUT tests/$testname > testPipe 2>&1
	TEST: test_simple6 FAILED 3
Subtotal: 2/20

SUITE: Malloc Tests 30 pts
	TEST: test_exact PASSED 5
	TEST: test_split FAILED 5
	TEST: test_multi_malloc FAILED 5
./utils/difftest.sh: line 16: 4081306 Segmentation fault      timeout $TIMEOUT tests/$testname > testPipe 2>&1
	TEST: test_insert_chunk FAILED 3
	TEST: test_coalesce_chunk_insert FAILED 3
	TEST: test_coalesce_chunk_coalesce FAILED 4
	TEST: test_malloc_large FAILED 5
Subtotal: 5/30

SUITE: Free Tests 24 pts
	TEST: test_free_insert FAILED 3
	TEST: test_free_left FAILED 4
	TEST: test_free_right FAILED 4
	TEST: test_free_both FAILED 3
	TEST: test_free_even FAILED 5
	TEST: test_free_odd FAILED 5
Subtotal: 0/24

SUITE: Other Tests 11 pts
	TEST: test_locks FAILED 3
	TEST: test_malloc_zero FAILED 2
./utils/difftest.sh: line 16: 4082006 Aborted                 timeout $TIMEOUT tests/$testname > testPipe 2>&1
	TEST: test_free_null FAILED 2
	TEST: test_double_free FAILED 2
./utils/difftest.sh: line 16: 4082053 Aborted                 timeout $TIMEOUT tests/$testname > testPipe 2>&1
	TEST: test_out_of_ram FAILED 2
Subtotal: 0/11

SUITE: Robustness Tests 15 pts
	TEST: test_large FAILED 10
	TEST: test_all_lists FAILED 5
Subtotal: 0/15


Total: 7/100

NOTE:
Additional tests worth an additional 10 points will be used for the final grading
zkhaval@data:~/cs252/lab1-src$ vim myMalloc.c

180   void * mem = sbrk(size);
181 ..
182   insert_fenceposts(mem, size);
183   header * hdr = (header *) ((char *)mem + ALLOC_HEADER_SIZE);
184   set_state(hdr, UNALLOCATED);
185   set_size(hdr, size - 2 * ALLOC_HEADER_SIZE);
186   hdr->left_size = ALLOC_HEADER_SIZE;
187   return hdr;
188 }
189 header * setter(header * firstItem, size_t block_size);
190 header * allocater(header * firstItem, size_t block_size);
191 void put_on_right_index(header *firstItem);
192 header * split(header *firstItem, size_t block_size);
193 header * initialIndexNotFree(header *firstItem, size_t block_size, size_t allocable);
194 header * indexFinder(header *firstItem, size_t block_size, size_t allocable);
195 
196 /**
197  * @brief Helper allocate an object given a raw request size from the user
198  *
199  * @param raw_size number of bytes the user needs
200  *
201  * @return A block satisfying the user's request
202  */
203 static inline header * allocate_object(size_t raw_size) {
204   // TODO implement allocation
205  // (void) raw_size;
206 // assert(false);
207  // exit(1);
208   header *result;//pointer to be returned
209   size_t allocable = ((raw_size + 7) / 8) * 8;
210   if(allocable < 16) {
211   allocable = 16;
212   }
213 
214   size_t block_size = allocable + ALLOC_HEADER_SIZE;
215   int index = (allocable / 8) - 1;
216 
217 header *freelist;
218 
219   for(;index < N_LISTS - 1; index++) {
220 
221 freelist = &freelistSentinels[index];
222 
223 if(freelist->next != freelist) {
224 header *firstItem = freelist->next;
225 return initialIndexNotFree(firstItem, block_size, allocable);
226 //return result;
227 }
228   }
229   freelist = &freelistSentinels[N_LISTS - 1];
230   return indexFinder(freelist, block_size, allocable);
231 
232 
233 /*
234 header *freelist= &freelistSentinels[index];
235 for(;index < N_LISTS; index++) {
236 freelist = &freelistSentinels[index];
237 if(freelist->next != freelist) {
238 break;
239 }
                                                                                                                                                                                          216,0-1       38%
