// 0066f040 <http[56314f485c23ccf6]::header::value::HeaderValue>

/* <&str as
   http[56314f485c23ccf6]::header::map::as_header_name::Sealed>::find::<http[56314f485c23ccf6]::header::value::HeaderValue>
    */

void __rustcall
<&str_as_http[56314f485c23ccf6]::header::map::as_header_name::Sealed>::find::
<http[56314f485c23ccf6]::header::value::HeaderValue>
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong unaff_RBX;
  ulonglong uVar14;
  char cVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char local_78;
  undefined1 local_70 [64];
  
  (*(code *)PTR_parse_hdr_0079a378)(local_70);
  if (local_78 == -1) {
    *param_1 = 0;
    return;
  }
  local_98 = local_78;
  local_a8 = local_88;
  uStack_a4 = uStack_84;
  uStack_a0 = uStack_80;
  uStack_9c = uStack_7c;
  uVar4 = *(ulonglong *)(param_4 + 0x28);
  if (uVar4 != 0) {
    uVar10 = http[56314f485c23ccf6]::header::map::hash_elem_using::
             <http[56314f485c23ccf6]::header::name::HdrName>(param_4,&local_a8);
    uVar2 = *(ushort *)(param_4 + 0x58);
    unaff_RBX = (ulonglong)(uVar10 & uVar2);
    uVar5 = *(ulonglong *)(param_4 + 0x50);
    lVar17 = *(longlong *)(param_4 + 0x20);
    lVar6 = *(longlong *)(param_4 + 0x48);
    lVar8 = CONCAT44(uStack_a4,local_a8);
    lVar9 = CONCAT44(uStack_9c,uStack_a0);
    cVar15 = (char)local_a8;
    if (lVar9 == 0) {
      if (local_98 != '\x02') {
        uVar12 = 0;
        do {
          bVar18 = uVar5 <= unaff_RBX;
          if (bVar18) {
            unaff_RBX = 0;
          }
          if (bVar18 && uVar5 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          param_4 = (ulonglong)*(ushort *)(lVar6 + unaff_RBX * 4);
          if ((param_4 == 0xffff) ||
             (uVar3 = *(ushort *)(lVar6 + 2 + unaff_RBX * 4),
             ((int)unaff_RBX - (uint)(uVar3 & uVar2) & (uint)uVar2) < uVar12)) goto LAB_0066f262;
          if (uVar3 == uVar10) {
            if (uVar4 <= param_4) goto LAB_0066f3b2;
            if ((*(longlong *)(lVar17 + 0x40 + param_4 * 0x68) != 0) &&
               (*(longlong *)(param_4 * 0x68 + lVar17 + 0x50) == 0)) goto LAB_0066f3a0;
          }
          uVar12 = uVar12 + 1;
          unaff_RBX = unaff_RBX + 1;
        } while( true );
      }
      uVar12 = 0;
      do {
        bVar18 = uVar5 <= unaff_RBX;
        if (bVar18) {
          unaff_RBX = 0;
        }
        if (bVar18 && uVar5 == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        param_4 = (ulonglong)*(ushort *)(lVar6 + unaff_RBX * 4);
        if ((param_4 == 0xffff) ||
           (uVar3 = *(ushort *)(lVar6 + 2 + unaff_RBX * 4),
           ((int)unaff_RBX - (uint)(uVar3 & uVar2) & (uint)uVar2) < uVar12)) goto LAB_0066f262;
        if (uVar3 == uVar10) {
          if (uVar4 <= param_4) goto LAB_0066f3b2;
          if ((*(longlong *)(lVar17 + 0x40 + param_4 * 0x68) == 0) &&
             (*(char *)(param_4 * 0x68 + lVar17 + 0x48) == cVar15)) goto LAB_0066f3a0;
        }
        uVar12 = uVar12 + 1;
        unaff_RBX = unaff_RBX + 1;
      } while( true );
    }
    uVar14 = 0;
    do {
      uVar16 = 0;
      bVar18 = uVar5 <= unaff_RBX;
      if (bVar18) {
        unaff_RBX = uVar16;
      }
      if (bVar18 && uVar5 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      param_4 = (ulonglong)*(ushort *)(lVar6 + unaff_RBX * 4);
      if (param_4 == 0xffff) goto LAB_0066f2f7;
      uVar3 = *(ushort *)(lVar6 + 2 + unaff_RBX * 4);
      uVar12 = (ulonglong)uVar3;
      if (((int)unaff_RBX - (uint)(uVar3 & uVar2) & (uint)uVar2) < uVar14) goto LAB_0066f2f7;
      if (uVar3 == uVar10) {
        if (uVar4 <= param_4) {
LAB_0066f3b2:
          (*(code *)PTR_panic_bounds_check_00799520)
                    (uVar12,&
                            PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790990
                    );
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar1 = lVar17 + param_4 * 0x68;
        if (*(longlong *)(lVar17 + 0x40 + param_4 * 0x68) == 0) {
          if ((local_98 == '\x02') && (*(char *)(lVar1 + 0x48) == cVar15)) goto LAB_0066f238;
        }
        else if (local_98 == '\0') {
          if (*(longlong *)(lVar1 + 0x50) == lVar9) {
            lVar13 = 0;
            while (*(char *)(*(longlong *)(lVar1 + 0x48) + lVar13) == ""[*(byte *)(lVar8 + lVar13)])
            {
              lVar13 = lVar13 + 1;
              if (lVar9 == lVar13) goto LAB_0066f238;
            }
          }
        }
        else if ((local_98 != '\x02') && (*(longlong *)(lVar1 + 0x50) == lVar9)) {
          local_90 = lVar17;
          iVar11 = (*(code *)PTR_bcmp_00799020)(lVar1,lVar9);
          lVar17 = local_90;
          if (iVar11 == 0) goto LAB_0066f238;
        }
      }
      uVar14 = uVar14 + 1;
      unaff_RBX = unaff_RBX + 1;
    } while( true );
  }
LAB_0066f262:
  uVar16 = 0;
LAB_0066f2f7:
  *param_1 = uVar16;
  param_1[1] = unaff_RBX;
  param_1[2] = param_4;
  return;
LAB_0066f3a0:
  uVar16 = 1;
  goto LAB_0066f2f7;
LAB_0066f238:
  uVar16 = 1;
  goto LAB_0066f2f7;
}


