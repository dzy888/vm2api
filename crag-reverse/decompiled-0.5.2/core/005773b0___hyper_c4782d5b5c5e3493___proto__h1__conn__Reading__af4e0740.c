// 005773b0 <hyper[c4782d5b5c5e3493]::proto::h1::conn::Reading>

/* WARNING: Switch with 1 destination removed at 0x005773cf */
/* WARNING: Switch with 1 destination removed at 0x0070f6e3 */
/* WARNING: Switch with 1 destination removed at 0x0070f719 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::conn::Reading> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::conn::Reading>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((((*param_1 != 1) && ((int)*param_1 != 2)) || (1 < *(uint *)(param_1 + 1))) ||
     (param_1[7] == 0)) {
    return;
  }
  plVar2 = (longlong *)param_1[10];
  if (((ulonglong)plVar2 & 1) == 0) {
    LOCK();
    plVar1 = plVar2 + 4;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) {
      return;
    }
    if (*plVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    uVar3 = 8;
  }
  else {
    if (param_1[9] + ((ulonglong)plVar2 >> 5) == 0) {
      return;
    }
    uVar3 = 1;
  }
  (*(code *)PTR_free_0079adc8)(param_4,uVar3);
  return;
}


