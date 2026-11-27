// 00766d20 next_back

/* WARNING: Type propagation algorithm not settling */
/* <std[6c98fd8553dbae28]::path::Components as
   core[c0acaeba6ab4c2e0]::iter::traits::double_ended::DoubleEndedIterator>::next_back */

char * __rustcall
<std[6c98fd8553dbae28]::path::Components_as_core[c0acaeba6ab4c2e0]::iter::traits::double_ended::DoubleEndedIterator>
::next_back(undefined4 param_1,char *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  char *******pppppppcVar5;
  char *pcVar6;
  char cVar7;
  char *******pppppppcVar8;
  char *******pppppppcVar9;
  char *******pppppppcVar10;
  bool bVar11;
  char *******local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  bVar1 = *(byte *)(param_3 + 7);
  bVar4 = *(byte *)((longlong)param_3 + 0x39);
  cVar7 = -1;
  if (bVar4 < bVar1 || (bVar4 == 3 || bVar1 == 3)) goto LAB_00767090;
  bVar2 = *(byte *)((longlong)param_3 + 0x3a);
  pppppppcVar5 = (char *******)(ulonglong)(bVar1 < 2 & bVar2);
  pppppppcVar10 = (char *******)*param_3;
  pppppppcVar9 = (char *******)param_3[1];
  if (bVar1 < 2) {
    if ((bVar2 & 1) != 0) {
      pppppppcVar10 = (char *******)&local_70;
      while (bVar4 != 1) {
        if (bVar4 != 2) goto LAB_007670e3;
        if (pppppppcVar9 <= pppppppcVar5) {
          *(undefined1 *)((longlong)param_3 + 0x39) = 1;
          break;
        }
        <std[6c98fd8553dbae28]::path::Components>::parse_next_component_back(pppppppcVar10,param_3);
        *(undefined8 *)(param_2 + 0x30) = local_38;
        *(undefined4 *)(param_2 + 0x20) = local_48;
        *(undefined4 *)(param_2 + 0x24) = uStack_44;
        *(undefined4 *)(param_2 + 0x28) = uStack_40;
        *(undefined4 *)(param_2 + 0x2c) = uStack_3c;
        *(undefined4 *)(param_2 + 0x10) = local_58;
        *(undefined4 *)(param_2 + 0x14) = uStack_54;
        *(undefined4 *)(param_2 + 0x18) = uStack_50;
        *(undefined4 *)(param_2 + 0x1c) = uStack_4c;
        *(undefined4 *)param_2 = local_68;
        *(undefined4 *)(param_2 + 4) = uStack_64;
        *(undefined4 *)(param_2 + 8) = uStack_60;
        *(undefined4 *)(param_2 + 0xc) = uStack_5c;
        if (pppppppcVar9 < local_70) goto LAB_007670d1;
        param_3[1] = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
        bVar4 = 2;
        pppppppcVar9 = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
        param_1 = local_68;
        if (*param_2 != -1) {
          return param_2;
        }
      }
LAB_0076707e:
      *(undefined1 *)((longlong)param_3 + 0x39) = 3;
      if (pppppppcVar9 != (char *******)0x0) {
        param_3[1] = (char *)((longlong)pppppppcVar9 + -1);
        cVar7 = '\x06';
        goto LAB_00767090;
      }
      (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00797510,0);
      pppppppcVar8 = pppppppcVar5;
      pppppppcVar9 = pppppppcVar10;
LAB_007670b9:
      (*(code *)PTR_slice_index_fail_007993c8)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_00797528,pppppppcVar8);
LAB_007670d1:
      param_1 = (*(code *)PTR_slice_index_fail_007993c8)
                          (&PTR_s__rustc_48a229ceaefd4985c50990b14_00797528,pppppppcVar9);
LAB_007670e3:
      (*(code *)PTR_panic_00799338)(param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_00797540);
      goto LAB_007670fc;
    }
    while (bVar4 != 1) {
      if (bVar4 != 2) goto LAB_007670e3;
      pppppppcVar5 = (char *******)0x0;
      if (pppppppcVar9 != (char *******)0x0) {
        if (pppppppcVar9 == (char *******)0x1) {
          if (*(char *)pppppppcVar10 == '.') goto LAB_00766efd;
        }
        else if ((*(char *)pppppppcVar10 == '.') && (*(char *)((longlong)pppppppcVar10 + 1) == '/'))
        {
LAB_00766efd:
          pppppppcVar5 = (char *******)0x1;
          goto LAB_00766f06;
        }
        pppppppcVar5 = (char *******)0x0;
      }
LAB_00766f06:
      if (pppppppcVar9 <= pppppppcVar5) {
        *(undefined1 *)((longlong)param_3 + 0x39) = 1;
        break;
      }
      <std[6c98fd8553dbae28]::path::Components>::parse_next_component_back(&local_70,param_3);
      *(undefined8 *)(param_2 + 0x30) = local_38;
      *(undefined4 *)(param_2 + 0x20) = local_48;
      *(undefined4 *)(param_2 + 0x24) = uStack_44;
      *(undefined4 *)(param_2 + 0x28) = uStack_40;
      *(undefined4 *)(param_2 + 0x2c) = uStack_3c;
      *(undefined4 *)(param_2 + 0x10) = local_58;
      *(undefined4 *)(param_2 + 0x14) = uStack_54;
      *(undefined4 *)(param_2 + 0x18) = uStack_50;
      *(undefined4 *)(param_2 + 0x1c) = uStack_4c;
      *(undefined4 *)param_2 = local_68;
      *(undefined4 *)(param_2 + 4) = uStack_64;
      *(undefined4 *)(param_2 + 8) = uStack_60;
      *(undefined4 *)(param_2 + 0xc) = uStack_5c;
      if (pppppppcVar9 < local_70) goto LAB_007670d1;
      param_3[1] = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
      bVar4 = 2;
      pppppppcVar9 = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
      param_1 = local_68;
      if (*param_2 != -1) {
        return param_2;
      }
    }
    *(undefined1 *)((longlong)param_3 + 0x39) = 3;
    if (pppppppcVar9 != (char *******)0x0) goto joined_r0x00767059;
  }
  else {
    if ((bVar2 & 1) == 0) {
      if (bVar4 != 1) {
        if (bVar4 == 2) {
          if (pppppppcVar5 < pppppppcVar9) {
            <std[6c98fd8553dbae28]::path::Components>::parse_next_component_back(&local_70,param_3);
            *(undefined8 *)(param_2 + 0x30) = local_38;
            *(undefined4 *)(param_2 + 0x20) = local_48;
            *(undefined4 *)(param_2 + 0x24) = uStack_44;
            *(undefined4 *)(param_2 + 0x28) = uStack_40;
            *(undefined4 *)(param_2 + 0x2c) = uStack_3c;
            *(undefined4 *)(param_2 + 0x10) = local_58;
            *(undefined4 *)(param_2 + 0x14) = uStack_54;
            *(undefined4 *)(param_2 + 0x18) = uStack_50;
            *(undefined4 *)(param_2 + 0x1c) = uStack_4c;
            *(undefined4 *)param_2 = local_68;
            *(undefined4 *)(param_2 + 4) = uStack_64;
            *(undefined4 *)(param_2 + 8) = uStack_60;
            *(undefined4 *)(param_2 + 0xc) = uStack_5c;
            if (pppppppcVar9 < local_70) goto LAB_00767125;
            param_3[1] = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
            if (*param_2 != -1) {
              return param_2;
            }
            pppppppcVar8 = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
            while (pppppppcVar5 < pppppppcVar8) {
              <std[6c98fd8553dbae28]::path::Components>::parse_next_component_back
                        (&local_70,param_3);
              *(undefined8 *)(param_2 + 0x30) = local_38;
              *(undefined4 *)(param_2 + 0x20) = local_48;
              *(undefined4 *)(param_2 + 0x24) = uStack_44;
              *(undefined4 *)(param_2 + 0x28) = uStack_40;
              *(undefined4 *)(param_2 + 0x2c) = uStack_3c;
              *(undefined4 *)(param_2 + 0x10) = local_58;
              *(undefined4 *)(param_2 + 0x14) = uStack_54;
              *(undefined4 *)(param_2 + 0x18) = uStack_50;
              *(undefined4 *)(param_2 + 0x1c) = uStack_4c;
              *(undefined4 *)param_2 = local_68;
              *(undefined4 *)(param_2 + 4) = uStack_64;
              *(undefined4 *)(param_2 + 8) = uStack_60;
              *(undefined4 *)(param_2 + 0xc) = uStack_5c;
              pppppppcVar9 = pppppppcVar5;
              if (pppppppcVar8 < local_70) goto LAB_007670b9;
              param_3[1] = (char *******)((longlong)pppppppcVar8 - (longlong)local_70);
              pppppppcVar8 = (char *******)((longlong)pppppppcVar8 - (longlong)local_70);
              if (*param_2 != -1) {
                return param_2;
              }
            }
          }
          goto LAB_0076701d;
        }
        goto LAB_007670e3;
      }
      *(undefined1 *)((longlong)param_3 + 0x39) = 3;
      if (pppppppcVar9 == (char *******)0x0) goto LAB_00767090;
joined_r0x00767059:
      if (pppppppcVar9 == (char *******)0x1) {
        cVar7 = -1;
        if (*(char *)pppppppcVar10 != '.') goto LAB_00767090;
      }
      else {
        cVar7 = -1;
        if ((*(char *)pppppppcVar10 != '.') || (*(char *)((longlong)pppppppcVar10 + 1) != '/'))
        goto LAB_00767090;
      }
      bVar11 = pppppppcVar9 != (char *******)0x0;
      pppppppcVar9 = (char *******)((longlong)pppppppcVar9 + -1);
      if (bVar11) {
        param_3[1] = pppppppcVar9;
        cVar7 = '\a';
        goto LAB_00767090;
      }
LAB_007670fc:
      (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_007974f8,0);
LAB_00767110:
      (*(code *)PTR_slice_index_fail_007993c8)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_00797528,pppppppcVar9);
LAB_00767125:
      (*(code *)PTR_slice_index_fail_007993c8)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_00797528,pppppppcVar9);
      pcVar3 = (code *)swi(3);
      pcVar6 = (char *)(*pcVar3)();
      return pcVar6;
    }
    if (bVar4 == 1) goto LAB_0076707e;
    if (bVar4 != 2) goto LAB_007670e3;
    if (pppppppcVar5 < pppppppcVar9) {
      <std[6c98fd8553dbae28]::path::Components>::parse_next_component_back(&local_70,param_3);
      *(undefined8 *)(param_2 + 0x30) = local_38;
      *(undefined4 *)(param_2 + 0x20) = local_48;
      *(undefined4 *)(param_2 + 0x24) = uStack_44;
      *(undefined4 *)(param_2 + 0x28) = uStack_40;
      *(undefined4 *)(param_2 + 0x2c) = uStack_3c;
      *(undefined4 *)(param_2 + 0x10) = local_58;
      *(undefined4 *)(param_2 + 0x14) = uStack_54;
      *(undefined4 *)(param_2 + 0x18) = uStack_50;
      *(undefined4 *)(param_2 + 0x1c) = uStack_4c;
      *(undefined4 *)param_2 = local_68;
      *(undefined4 *)(param_2 + 4) = uStack_64;
      *(undefined4 *)(param_2 + 8) = uStack_60;
      *(undefined4 *)(param_2 + 0xc) = uStack_5c;
      if (pppppppcVar9 < local_70) goto LAB_00767110;
      param_3[1] = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
      if (*param_2 != -1) {
        return param_2;
      }
      pppppppcVar9 = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
      while (pppppppcVar5 < pppppppcVar9) {
        <std[6c98fd8553dbae28]::path::Components>::parse_next_component_back(&local_70,param_3);
        *(undefined8 *)(param_2 + 0x30) = local_38;
        *(undefined4 *)(param_2 + 0x20) = local_48;
        *(undefined4 *)(param_2 + 0x24) = uStack_44;
        *(undefined4 *)(param_2 + 0x28) = uStack_40;
        *(undefined4 *)(param_2 + 0x2c) = uStack_3c;
        *(undefined4 *)(param_2 + 0x10) = local_58;
        *(undefined4 *)(param_2 + 0x14) = uStack_54;
        *(undefined4 *)(param_2 + 0x18) = uStack_50;
        *(undefined4 *)(param_2 + 0x1c) = uStack_4c;
        *(undefined4 *)param_2 = local_68;
        *(undefined4 *)(param_2 + 4) = uStack_64;
        *(undefined4 *)(param_2 + 8) = uStack_60;
        *(undefined4 *)(param_2 + 0xc) = uStack_5c;
        if (pppppppcVar9 < local_70) goto LAB_007670d1;
        param_3[1] = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
        pppppppcVar9 = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
        if (*param_2 != -1) {
          return param_2;
        }
      }
    }
LAB_0076701d:
    *(undefined1 *)((longlong)param_3 + 0x39) = 1;
  }
  cVar7 = -1;
LAB_00767090:
  *param_2 = cVar7;
  return param_2;
}


