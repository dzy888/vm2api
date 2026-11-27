// 0079e3c8 waitid

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int waitid(idtype_t __idtype,__id_t __id,siginfo_t *__infop,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


