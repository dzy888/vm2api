// 006c77f0 parse_hdr

/* http[56314f485c23ccf6]::header::name::parse_hdr */

void __rustcall
http[56314f485c23ccf6]::header::name::parse_hdr
          (longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4,longlong param_5)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  cVar4 = -1;
  if (param_3 == 0) goto LAB_006c7935;
  if (0x40 < param_3) {
    if (param_3 < 0x10000) {
      *param_1 = param_2;
      param_1[1] = param_3;
      cVar4 = '\0';
    }
    goto LAB_006c7935;
  }
  uVar3 = (ulonglong)((uint)param_3 & 3);
  if (param_3 < 4) {
    uVar6 = 0;
LAB_006c789f:
    uVar5 = 0;
    do {
      *(undefined1 *)(param_4 + uVar6 + uVar5) =
           *(undefined1 *)(param_5 + (ulonglong)*(byte *)(param_2 + uVar6 + uVar5));
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  else {
    uVar6 = 0;
    do {
      *(undefined1 *)(param_4 + uVar6) =
           *(undefined1 *)(param_5 + (ulonglong)*(byte *)(param_2 + uVar6));
      *(undefined1 *)(param_4 + 1 + uVar6) =
           *(undefined1 *)(param_5 + (ulonglong)*(byte *)(param_2 + 1 + uVar6));
      *(undefined1 *)(param_4 + 2 + uVar6) =
           *(undefined1 *)(param_5 + (ulonglong)*(byte *)(param_2 + 2 + uVar6));
      *(undefined1 *)(param_4 + 3 + uVar6) =
           *(undefined1 *)(param_5 + (ulonglong)*(byte *)(param_2 + 3 + uVar6));
      uVar6 = uVar6 + 4;
    } while (((uint)param_3 & 0x7c) != uVar6);
    if (uVar3 != 0) goto LAB_006c789f;
  }
  cVar1 = (*(code *)PTR_from_bytes_0079a588)();
  if (cVar1 == -1) {
    if (param_3 < 0x10) {
      uVar3 = 0;
      do {
        if (*(char *)(param_4 + uVar3) == '\0') goto LAB_006c7935;
        uVar3 = uVar3 + 1;
      } while (param_3 != uVar3);
    }
    else {
      lVar2 = (*(code *)PTR_memchr_aligned_00799490)();
      if (lVar2 == 1) goto LAB_006c7935;
    }
    *param_1 = param_4;
    param_1[1] = param_3;
    cVar4 = '\x01';
  }
  else {
    *(char *)param_1 = cVar1;
    cVar4 = '\x02';
  }
LAB_006c7935:
  *(char *)(param_1 + 2) = cVar4;
  return;
}


