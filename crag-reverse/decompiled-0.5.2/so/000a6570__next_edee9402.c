// 000a6570 next

/* <std[6c98fd8553dbae28]::path::Components as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

char * __rustcall
<std[6c98fd8553dbae28]::path::Components_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(char *param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  char *pcVar5;
  char *unaff_RBX;
  ulonglong uVar6;
  char *pcVar7;
  char *in_R10;
  char *pcVar8;
  byte bVar9;
  char *pcVar10;
  bool bVar11;
  
  bVar1 = *(byte *)((longlong)param_2 + 0x39);
  bVar9 = *(byte *)(param_2 + 7);
  if (bVar9 <= bVar1 && (bVar9 != 3 && bVar1 != 3)) {
    pcVar5 = (char *)*param_2;
    uVar6 = (ulonglong)(byte)*param_1;
    pcVar10 = (char *)param_2[1];
    if ((*(byte *)((longlong)param_2 + 0x3a) & 1) == 0) {
      pcVar7 = pcVar10;
      do {
        if (bVar9 == 1) {
          *(undefined1 *)(param_2 + 7) = 2;
          if (pcVar7 != (char *)0x0) {
            if (pcVar7 == Elf64_Ehdr_00000000.e_ident_magic_str) {
              pcVar7 = Elf64_Ehdr_00000000.e_ident_magic_str;
              if (*pcVar5 == 0x2e) goto LAB_000a67e1;
            }
            else if ((*pcVar5 == 0x2e) && (pcVar5[1] == 0x2f)) {
LAB_000a67e1:
              if (pcVar10 == (char *)0x0) {
                (*(code *)PTR_slice_index_fail_000c3bb0)
                          (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2228,0);
                pcVar2 = (code *)swi(3);
                pcVar5 = (char *)(*pcVar2)();
                return pcVar5;
              }
              *param_2 = pcVar5 + 1;
              param_2[1] = (Elf64_Ehdr *)(pcVar10 + -1);
              bVar9 = 7;
              goto LAB_000a67d6;
            }
          }
        }
        else {
          if (bVar9 != 2) goto LAB_000a683b;
          if (pcVar7 == (char *)0x0) goto LAB_000a6804;
          pcVar10 = (char *)0x0;
          do {
            if (pcVar5[(longlong)pcVar10] == 0x2f) {
              lVar4 = 1;
              uVar6 = 0xff;
              bVar3 = true;
              if (pcVar10 == (char *)0x0) goto LAB_000a6786;
              goto LAB_000a6751;
            }
            pcVar10 = pcVar10 + 1;
          } while (pcVar7 != pcVar10);
          lVar4 = 0;
          uVar6 = 0xff;
          bVar3 = true;
          pcVar10 = pcVar7;
          if (pcVar7 != (char *)0x0) {
LAB_000a6751:
            bVar3 = true;
            uVar6 = 0xff;
            if (pcVar10 == Elf64_Ehdr_00000000.e_ident_magic_str + 1) {
              if ((*pcVar5 != 0x2e) || (pcVar5[1] != 0x2e)) goto LAB_000a6780;
              bVar3 = false;
              uVar6 = 8;
            }
            else if ((pcVar10 != Elf64_Ehdr_00000000.e_ident_magic_str) || (*pcVar5 != 0x2e)) {
LAB_000a6780:
              uVar6 = 9;
              bVar3 = false;
            }
          }
LAB_000a6786:
          bVar9 = (byte)uVar6;
          in_R10 = pcVar10 + lVar4;
          *(char **)(param_1 + 8) = pcVar5;
          *(char **)(param_1 + 0x10) = pcVar10;
          pcVar10 = pcVar7 + -(longlong)in_R10;
          if (pcVar7 < in_R10) {
            pcVar8 = in_R10;
            do {
              *param_1 = (byte)uVar6;
              (*(code *)PTR_slice_index_fail_000c3bb0)
                        (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2258);
LAB_000a6833:
              *(char **)(in_R10 + 8) = unaff_RBX;
              *(char **)(in_R10 + 0x10) = pcVar7;
              param_1 = in_R10;
              in_R10 = pcVar8;
LAB_000a683b:
              *param_1 = (byte)uVar6;
              (*(code *)PTR_panic_000c3b00)();
              pcVar8 = in_R10;
LAB_000a6857:
              param_1 = Elf64_Ehdr_00000000.e_ident_magic_str;
              in_R10 = (char *)(*(code *)PTR_slice_index_fail_000c3bb0)
                                         (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2240,0);
LAB_000a686d:
              *(char **)(param_1 + 8) = pcVar8;
              *(char **)(param_1 + 0x10) = pcVar7;
            } while( true );
          }
          pcVar5 = pcVar5 + (longlong)in_R10;
          *param_2 = pcVar5;
          param_2[1] = pcVar10;
          pcVar7 = pcVar10;
          if (!bVar3) goto LAB_000a67d6;
        }
        bVar9 = 2;
      } while (1 < bVar1);
    }
    else {
      pcVar7 = *(char **)(param_1 + 0x10);
      unaff_RBX = *(char **)(param_1 + 8);
      do {
        pcVar8 = pcVar5;
        if (bVar9 == 1) {
          *(char **)(param_1 + 8) = unaff_RBX;
          *(char **)(param_1 + 0x10) = pcVar7;
          *(undefined1 *)(param_2 + 7) = 2;
          if (pcVar10 == (char *)0x0) goto LAB_000a6857;
          *param_2 = pcVar8 + 1;
          param_2[1] = (Elf64_Ehdr *)(pcVar10 + -1);
          bVar9 = 6;
          goto LAB_000a67d6;
        }
        in_R10 = param_1;
        if (bVar9 != 2) goto LAB_000a6833;
        if (pcVar10 == (char *)0x0) {
          *(char **)(param_1 + 8) = unaff_RBX;
          *(char **)(param_1 + 0x10) = pcVar7;
          goto LAB_000a6804;
        }
        pcVar7 = (char *)0x0;
        do {
          if (pcVar8[(longlong)pcVar7] == 0x2f) {
            lVar4 = 1;
            uVar6 = 0xff;
            bVar3 = true;
            if (pcVar7 == (char *)0x0) goto LAB_000a664e;
            goto LAB_000a6621;
          }
          pcVar7 = pcVar7 + 1;
        } while (pcVar10 != pcVar7);
        lVar4 = 0;
        uVar6 = 0xff;
        bVar3 = true;
        pcVar7 = pcVar10;
        if (pcVar10 != (char *)0x0) {
LAB_000a6621:
          bVar3 = true;
          uVar6 = 0xff;
          if (pcVar7 == Elf64_Ehdr_00000000.e_ident_magic_str) {
            if (*pcVar8 != 0x2e) goto LAB_000a6648;
          }
          else if (((pcVar7 == Elf64_Ehdr_00000000.e_ident_magic_str + 1) && (*pcVar8 == 0x2e)) &&
                  (pcVar8[1] == 0x2e)) {
            bVar3 = false;
            uVar6 = 8;
          }
          else {
LAB_000a6648:
            uVar6 = 9;
            bVar3 = false;
          }
        }
LAB_000a664e:
        bVar9 = (byte)uVar6;
        in_R10 = pcVar7 + lVar4;
        bVar11 = pcVar10 < in_R10;
        pcVar10 = pcVar10 + -(longlong)in_R10;
        if (bVar11) goto LAB_000a686d;
        *param_2 = in_R10 + (longlong)pcVar8;
        param_2[1] = pcVar10;
        if (!bVar3) {
          *(char **)(param_1 + 8) = pcVar8;
          *(char **)(param_1 + 0x10) = pcVar7;
          goto LAB_000a67d6;
        }
        bVar9 = 2;
        pcVar5 = in_R10 + (longlong)pcVar8;
        unaff_RBX = pcVar8;
      } while (1 < bVar1);
      *(char **)(param_1 + 8) = pcVar8;
      *(char **)(param_1 + 0x10) = pcVar7;
    }
  }
LAB_000a6599:
  bVar9 = 0xff;
LAB_000a67d6:
  *param_1 = bVar9;
  return param_1;
LAB_000a6804:
  *(undefined1 *)(param_2 + 7) = 3;
  goto LAB_000a6599;
}


