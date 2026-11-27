// 0079e060 madvise

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int madvise(void *__addr,size_t __len,int __advice)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


