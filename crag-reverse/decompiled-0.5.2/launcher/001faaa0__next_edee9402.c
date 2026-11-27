// 001faaa0 next

/* <std[6c98fd8553dbae28]::path::Components as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

byte * __rustcall
<std[6c98fd8553dbae28]::path::Components_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *unaff_RBX;
  ulonglong uVar6;
  byte *pbVar7;
  byte *in_R10;
  byte *pbVar8;
  byte bVar9;
  byte *pbVar10;
  bool bVar11;
  
  bVar1 = *(byte *)((longlong)param_2 + 0x39);
  bVar9 = *(byte *)(param_2 + 7);
  if (bVar9 <= bVar1 && (bVar9 != 3 && bVar1 != 3)) {
    pbVar5 = (byte *)*param_2;
    uVar6 = (ulonglong)*param_1;
    pbVar10 = (byte *)param_2[1];
    if ((*(byte *)((longlong)param_2 + 0x3a) & 1) == 0) {
      pbVar7 = pbVar10;
      do {
        if (bVar9 == 1) {
          *(undefined1 *)(param_2 + 7) = 2;
          if (pbVar7 != (byte *)0x0) {
            if (pbVar7 == (byte *)0x1) {
              pbVar7 = (byte *)0x1;
              if (*pbVar5 == 0x2e) goto LAB_001fad11;
            }
            else if ((*pbVar5 == 0x2e) && (pbVar5[1] == 0x2f)) {
LAB_001fad11:
              if (pbVar10 == (byte *)0x0) {
                (*(code *)PTR_slice_index_fail_00219d80)
                          (&PTR_s__rustc_48a229ceaefd4985c50990b14_002182b8,0);
                pcVar2 = (code *)swi(3);
                pbVar5 = (byte *)(*pcVar2)();
                return pbVar5;
              }
              *param_2 = pbVar5 + 1;
              param_2[1] = pbVar10 + -1;
              bVar9 = 7;
              goto LAB_001fad06;
            }
          }
        }
        else {
          if (bVar9 != 2) goto LAB_001fad6b;
          if (pbVar7 == (byte *)0x0) goto LAB_001fad34;
          pbVar10 = (byte *)0x0;
          do {
            if (pbVar5[(longlong)pbVar10] == 0x2f) {
              lVar4 = 1;
              uVar6 = 0xff;
              bVar3 = true;
              if (pbVar10 == (byte *)0x0) goto LAB_001facb6;
              goto LAB_001fac81;
            }
            pbVar10 = pbVar10 + 1;
          } while (pbVar7 != pbVar10);
          lVar4 = 0;
          uVar6 = 0xff;
          bVar3 = true;
          pbVar10 = pbVar7;
          if (pbVar7 != (byte *)0x0) {
LAB_001fac81:
            bVar3 = true;
            uVar6 = 0xff;
            if (pbVar10 == (byte *)0x2) {
              if ((*pbVar5 != 0x2e) || (pbVar5[1] != 0x2e)) goto LAB_001facb0;
              bVar3 = false;
              uVar6 = 8;
            }
            else if ((pbVar10 != (byte *)0x1) || (*pbVar5 != 0x2e)) {
LAB_001facb0:
              uVar6 = 9;
              bVar3 = false;
            }
          }
LAB_001facb6:
          bVar9 = (byte)uVar6;
          in_R10 = pbVar10 + lVar4;
          *(byte **)(param_1 + 8) = pbVar5;
          *(byte **)(param_1 + 0x10) = pbVar10;
          pbVar10 = pbVar7 + -(longlong)in_R10;
          if (pbVar7 < in_R10) {
            pbVar8 = in_R10;
            do {
              *param_1 = (byte)uVar6;
              (*(code *)PTR_slice_index_fail_00219d80)
                        (&PTR_s__rustc_48a229ceaefd4985c50990b14_002182e8);
LAB_001fad63:
              *(byte **)(in_R10 + 8) = unaff_RBX;
              *(byte **)(in_R10 + 0x10) = pbVar7;
              param_1 = in_R10;
              in_R10 = pbVar8;
LAB_001fad6b:
              *param_1 = (byte)uVar6;
              (*(code *)PTR_panic_00219ca8)();
              pbVar8 = in_R10;
LAB_001fad87:
              param_1 = (byte *)0x1;
              in_R10 = (byte *)(*(code *)PTR_slice_index_fail_00219d80)
                                         (&PTR_s__rustc_48a229ceaefd4985c50990b14_002182d0,0);
LAB_001fad9d:
              *(byte **)(param_1 + 8) = pbVar8;
              *(byte **)(param_1 + 0x10) = pbVar7;
            } while( true );
          }
          pbVar5 = pbVar5 + (longlong)in_R10;
          *param_2 = pbVar5;
          param_2[1] = pbVar10;
          pbVar7 = pbVar10;
          if (!bVar3) goto LAB_001fad06;
        }
        bVar9 = 2;
      } while (1 < bVar1);
    }
    else {
      pbVar7 = *(byte **)(param_1 + 0x10);
      unaff_RBX = *(byte **)(param_1 + 8);
      do {
        pbVar8 = pbVar5;
        if (bVar9 == 1) {
          *(byte **)(param_1 + 8) = unaff_RBX;
          *(byte **)(param_1 + 0x10) = pbVar7;
          *(undefined1 *)(param_2 + 7) = 2;
          if (pbVar10 == (byte *)0x0) goto LAB_001fad87;
          *param_2 = pbVar8 + 1;
          param_2[1] = pbVar10 + -1;
          bVar9 = 6;
          goto LAB_001fad06;
        }
        in_R10 = param_1;
        if (bVar9 != 2) goto LAB_001fad63;
        if (pbVar10 == (byte *)0x0) {
          *(byte **)(param_1 + 8) = unaff_RBX;
          *(byte **)(param_1 + 0x10) = pbVar7;
          goto LAB_001fad34;
        }
        pbVar7 = (byte *)0x0;
        do {
          if (pbVar8[(longlong)pbVar7] == 0x2f) {
            lVar4 = 1;
            uVar6 = 0xff;
            bVar3 = true;
            if (pbVar7 == (byte *)0x0) goto LAB_001fab7e;
            goto LAB_001fab51;
          }
          pbVar7 = pbVar7 + 1;
        } while (pbVar10 != pbVar7);
        lVar4 = 0;
        uVar6 = 0xff;
        bVar3 = true;
        pbVar7 = pbVar10;
        if (pbVar10 != (byte *)0x0) {
LAB_001fab51:
          bVar3 = true;
          uVar6 = 0xff;
          if (pbVar7 == (byte *)0x1) {
            if (*pbVar8 != 0x2e) goto LAB_001fab78;
          }
          else if (((pbVar7 == (byte *)0x2) && (*pbVar8 == 0x2e)) && (pbVar8[1] == 0x2e)) {
            bVar3 = false;
            uVar6 = 8;
          }
          else {
LAB_001fab78:
            uVar6 = 9;
            bVar3 = false;
          }
        }
LAB_001fab7e:
        bVar9 = (byte)uVar6;
        in_R10 = pbVar7 + lVar4;
        bVar11 = pbVar10 < in_R10;
        pbVar10 = pbVar10 + -(longlong)in_R10;
        if (bVar11) goto LAB_001fad9d;
        *param_2 = in_R10 + (longlong)pbVar8;
        param_2[1] = pbVar10;
        if (!bVar3) {
          *(byte **)(param_1 + 8) = pbVar8;
          *(byte **)(param_1 + 0x10) = pbVar7;
          goto LAB_001fad06;
        }
        bVar9 = 2;
        pbVar5 = in_R10 + (longlong)pbVar8;
        unaff_RBX = pbVar8;
      } while (1 < bVar1);
      *(byte **)(param_1 + 8) = pbVar8;
      *(byte **)(param_1 + 0x10) = pbVar7;
    }
  }
LAB_001faac9:
  bVar9 = 0xff;
LAB_001fad06:
  *param_1 = bVar9;
  return param_1;
LAB_001fad34:
  *(undefined1 *)(param_2 + 7) = 3;
  goto LAB_001faac9;
}


