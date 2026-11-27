// 000a6890 next_back

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
  char *pcVar5;
  char cVar6;
  char *******pppppppcVar7;
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
  cVar6 = -1;
  if (bVar4 < bVar1 || (bVar4 == 3 || bVar1 == 3)) goto LAB_000a6c00;
  bVar2 = *(byte *)((longlong)param_3 + 0x3a);
  pppppppcVar7 = (char *******)(ulonglong)(bVar1 < 2 & bVar2);
  pppppppcVar10 = (char *******)*param_3;
  pppppppcVar9 = (char *******)param_3[1];
  if (bVar1 < 2) {
    if ((bVar2 & 1) != 0) {
      pppppppcVar10 = (char *******)&local_70;
      while (bVar4 != 1) {
        if (bVar4 != 2) goto LAB_000a6c53;
        if (pppppppcVar9 <= pppppppcVar7) {
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
        if (pppppppcVar9 < local_70) goto LAB_000a6c41;
        param_3[1] = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
        bVar4 = 2;
        pppppppcVar9 = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
        param_1 = local_68;
        if (*param_2 != -1) {
          return param_2;
        }
      }
LAB_000a6bee:
      *(undefined1 *)((longlong)param_3 + 0x39) = 3;
      if (pppppppcVar9 != (char *******)0x0) {
        param_3[1] = (char *)((longlong)pppppppcVar9 + -1);
        cVar6 = '\x06';
        goto LAB_000a6c00;
      }
      (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s__rustc_48a229ceaefd4985c50990b14_000c22a0,0);
      pppppppcVar8 = pppppppcVar7;
      pppppppcVar9 = pppppppcVar10;
LAB_000a6c29:
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c22b8,pppppppcVar8);
LAB_000a6c41:
      param_1 = (*(code *)PTR_slice_index_fail_000c3bb0)
                          (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c22b8,pppppppcVar9);
LAB_000a6c53:
      (*(code *)PTR_panic_000c3b00)(param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c22d0);
      goto LAB_000a6c6c;
    }
    while (bVar4 != 1) {
      if (bVar4 != 2) goto LAB_000a6c53;
      pcVar5 = (char *)0x0;
      if (pppppppcVar9 != (char *******)0x0) {
        if (pppppppcVar9 == (char *******)Elf64_Ehdr_00000000.e_ident_magic_str) {
          if (*(char *)pppppppcVar10 == '.') goto LAB_000a6a6d;
        }
        else if ((*(char *)pppppppcVar10 == '.') && (*(char *)((longlong)pppppppcVar10 + 1) == '/'))
        {
LAB_000a6a6d:
          pcVar5 = Elf64_Ehdr_00000000.e_ident_magic_str;
          goto LAB_000a6a76;
        }
        pcVar5 = (char *)0x0;
      }
LAB_000a6a76:
      if (pppppppcVar9 <= pcVar5) {
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
      if (pppppppcVar9 < local_70) goto LAB_000a6c41;
      param_3[1] = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
      bVar4 = 2;
      pppppppcVar9 = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
      param_1 = local_68;
      if (*param_2 != -1) {
        return param_2;
      }
    }
    *(undefined1 *)((longlong)param_3 + 0x39) = 3;
    if (pppppppcVar9 != (char *******)0x0) {
      if (pppppppcVar9 == (char *******)Elf64_Ehdr_00000000.e_ident_magic_str) goto LAB_000a6bcb;
LAB_000a6ba4:
      cVar6 = -1;
      if ((*(char *)pppppppcVar10 != '.') || (*(char *)((longlong)pppppppcVar10 + 1) != '/'))
      goto LAB_000a6c00;
      goto LAB_000a6bd1;
    }
  }
  else {
    if ((bVar2 & 1) == 0) {
      if (bVar4 != 1) {
        if (bVar4 == 2) {
          if (pppppppcVar7 < pppppppcVar9) {
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
            if (pppppppcVar9 < local_70) goto LAB_000a6c95;
            param_3[1] = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
            if (*param_2 != -1) {
              return param_2;
            }
            pppppppcVar8 = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
            while (pppppppcVar7 < pppppppcVar8) {
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
              pppppppcVar9 = pppppppcVar7;
              if (pppppppcVar8 < local_70) goto LAB_000a6c29;
              param_3[1] = (char *******)((longlong)pppppppcVar8 - (longlong)local_70);
              pppppppcVar8 = (char *******)((longlong)pppppppcVar8 - (longlong)local_70);
              if (*param_2 != -1) {
                return param_2;
              }
            }
          }
          goto LAB_000a6b8d;
        }
        goto LAB_000a6c53;
      }
      *(undefined1 *)((longlong)param_3 + 0x39) = 3;
      if (pppppppcVar9 == (char *******)0x0) goto LAB_000a6c00;
      if (pppppppcVar9 != (char *******)Elf64_Ehdr_00000000.e_ident_magic_str) goto LAB_000a6ba4;
LAB_000a6bcb:
      cVar6 = -1;
      if (*(char *)pppppppcVar10 != '.') goto LAB_000a6c00;
LAB_000a6bd1:
      bVar11 = pppppppcVar9 != (char *******)0x0;
      pppppppcVar9 = (char *******)((longlong)pppppppcVar9 + -1);
      if (bVar11) {
        param_3[1] = pppppppcVar9;
        cVar6 = '\a';
        goto LAB_000a6c00;
      }
LAB_000a6c6c:
      (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2288,0);
LAB_000a6c80:
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c22b8,pppppppcVar9);
LAB_000a6c95:
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c22b8,pppppppcVar9);
      pcVar3 = (code *)swi(3);
      pcVar5 = (char *)(*pcVar3)();
      return pcVar5;
    }
    if (bVar4 == 1) goto LAB_000a6bee;
    if (bVar4 != 2) goto LAB_000a6c53;
    if (pppppppcVar7 < pppppppcVar9) {
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
      if (pppppppcVar9 < local_70) goto LAB_000a6c80;
      param_3[1] = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
      if (*param_2 != -1) {
        return param_2;
      }
      pppppppcVar9 = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
      while (pppppppcVar7 < pppppppcVar9) {
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
        if (pppppppcVar9 < local_70) goto LAB_000a6c41;
        param_3[1] = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
        pppppppcVar9 = (char *******)((longlong)pppppppcVar9 - (longlong)local_70);
        if (*param_2 != -1) {
          return param_2;
        }
      }
    }
LAB_000a6b8d:
    *(undefined1 *)((longlong)param_3 + 0x39) = 1;
  }
  cVar6 = -1;
LAB_000a6c00:
  *param_2 = cVar6;
  return param_2;
}


