// 00250420 __do_global_dtors_aux

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  if (PTR___cxa_finalize_00798f88 != (undefined *)0x0) {
    __cxa_finalize();
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}


