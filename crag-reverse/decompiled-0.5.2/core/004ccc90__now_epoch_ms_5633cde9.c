// 004ccc90 now_epoch_ms

/* craggemini_core[66f3c71560d70857]::pool::now_epoch_ms */

longlong __rustcall craggemini_core[66f3c71560d70857]::pool::now_epoch_ms(void)

{
  longlong lVar1;
  char local_20;
  longlong local_18;
  uint local_10;
  
  (*(code *)PTR_now_007993f0)();
  lVar1 = 0;
  (*(code *)PTR_duration_since_007993f8)(0,0);
  if (local_20 == '\0') {
    lVar1 = (ulonglong)local_10 / 1000000 + local_18 * 1000;
  }
  return lVar1;
}


