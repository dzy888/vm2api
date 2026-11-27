// 00096d90 parse_next_component_back

/* <std[6c98fd8553dbae28]::path::Components>::parse_next_component_back */

void __rustcall
<std[6c98fd8553dbae28]::path::Components>::parse_next_component_back
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if ((1 < *(byte *)(param_2 + 7)) || ((*(byte *)((longlong)param_2 + 0x3a) & 1) != 0))
  goto LAB_00096db4;
  lVar8 = 0;
  if (param_2[1] != 0) {
    pcVar7 = (char *)*param_2;
    if (param_2[1] == 1) {
      if (*pcVar7 == '.') {
LAB_00096e89:
        lVar8 = 1;
        goto LAB_00096db6;
      }
    }
    else if ((*pcVar7 == '.') && (pcVar7[1] == '/')) goto LAB_00096e89;
LAB_00096db4:
    lVar8 = 0;
  }
LAB_00096db6:
  uVar6 = lVar8 + (ulonglong)(*(byte *)(param_2 + 7) < 2 & *(byte *)((longlong)param_2 + 0x3a));
  uVar4 = param_2[1];
  if (uVar4 < uVar6) {
    (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1b38);
LAB_00096ea6:
    (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1b20);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar7 = (char *)(*param_2 + uVar6);
  lVar11 = -1;
  lVar9 = 0;
  lVar8 = *param_2;
  uVar12 = uVar6;
  do {
    if (uVar4 == uVar12) goto LAB_00096e15;
    lVar1 = lVar8 + -1;
    uVar12 = uVar12 + 1;
    lVar11 = lVar11 + 1;
    lVar2 = lVar8 + -1;
    lVar8 = lVar1;
  } while (*(char *)(lVar2 + uVar4) != '/');
  uVar6 = uVar4 - lVar11;
  if (uVar4 < uVar6) goto LAB_00096ea6;
  pcVar7 = (char *)(lVar1 + uVar4 + 1);
  lVar9 = 1;
LAB_00096e15:
  uVar10 = 0xff;
  lVar8 = uVar4 - uVar6;
  if (lVar8 == 0) goto LAB_00096e62;
  if (lVar8 == 1) {
    cVar3 = *pcVar7;
joined_r0x00096e5d:
    if (cVar3 == '.') goto LAB_00096e62;
  }
  else if ((lVar8 == 2) && (*pcVar7 == '.')) {
    uVar10 = 8;
    cVar3 = pcVar7[1];
    goto joined_r0x00096e5d;
  }
  uVar10 = 9;
LAB_00096e62:
  *param_1 = lVar9 + lVar8;
  *(undefined1 *)(param_1 + 1) = uVar10;
  param_1[2] = (longlong)pcVar7;
  param_1[3] = lVar8;
  return;
}


