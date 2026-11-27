// 006a3530 next

/* <http[56314f485c23ccf6]::header::map::ValueIter<http[56314f485c23ccf6]::header::value::HeaderValue>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

char * __rustcall
<http[56314f485c23ccf6]::header::map::ValueIter<http[56314f485c23ccf6]::header::value::HeaderValue>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    lVar4 = param_1[4];
    if ((ulonglong)param_1[5] < *(ulonglong *)(lVar4 + 0x28)) {
      pcVar5 = (char *)(param_1[5] * 0x68 + *(longlong *)(lVar4 + 0x20));
      if (param_1[2] == 0) {
        *param_1 = 2;
        param_1[2] = 2;
        return pcVar5 + 0x18;
      }
      if (*pcVar5 != '\0') {
        lVar4 = *(longlong *)(pcVar5 + 8);
        *param_1 = 1;
        param_1[1] = lVar4;
        return pcVar5 + 0x18;
      }
      (*(code *)PTR_panic_00799338)
                (lVar4,&anon_d3057478e380898db632effa827bd31f_641_llvm_2674179329317868992);
    }
    (*(code *)PTR_panic_bounds_check_00799520)();
  }
  else {
    iVar6 = (int)*param_1;
    if (iVar6 == 2) {
      return (char *)0x0;
    }
    uVar1 = param_1[1];
    if (uVar1 < *(ulonglong *)(param_1[4] + 0x40)) {
      lVar4 = uVar1 * 0x48 + *(longlong *)(param_1[4] + 0x38);
      if (((param_1[2] != 2) && (iVar6 == (int)param_1[2])) && (uVar1 == param_1[3])) {
        *param_1 = 2;
        param_1[2] = 2;
        return (char *)(lVar4 + 0x20);
      }
      if (*(char *)(lVar4 + 0x10) == '\0') {
        *param_1 = 2;
        return (char *)(lVar4 + 0x20);
      }
      lVar2 = *(longlong *)(lVar4 + 0x18);
      *param_1 = 1;
      param_1[1] = lVar2;
      return (char *)(lVar4 + 0x20);
    }
  }
  (*(code *)PTR_panic_bounds_check_00799520)();
  pcVar3 = (code *)swi(3);
  pcVar5 = (char *)(*pcVar3)();
  return pcVar5;
}


