// 006c2780 from_shared

/* <http[56314f485c23ccf6]::uri::Uri>::from_shared */

byte * __rustcall
<http[56314f485c23ccf6]::uri::Uri>::from_shared
          (byte *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  bool bVar12;
  byte bVar13;
  longlong *plVar14;
  undefined8 uVar15;
  byte local_d1;
  byte local_d0;
  byte bStack_cf;
  undefined6 uStack_ce;
  byte local_c8;
  undefined4 uStack_c7;
  undefined2 uStack_c3;
  byte bStack_c1;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined2 uStack_b0;
  undefined4 uStack_ae;
  undefined2 uStack_aa;
  longlong local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  longlong lStack_80;
  longlong *local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar1 = param_2[2];
  if (uVar1 < 0xffff) {
    if (uVar1 == 0) {
      param_1[0] = 0xff;
      param_1[1] = 10;
    }
    else {
      if ((int)uVar1 != 1) {
        if (uVar1 == 0) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (param_4,&
                             PTR_anon_f1eb495d0fb03a9bced428bcb7e13639_0_llvm_7285962656512758286_007931b0
                    );
LAB_006c2e35:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (*(char *)param_2[1] == '/') {
          local_78 = (longlong *)*param_2;
          lStack_70 = param_2[1];
          local_68 = (undefined4)param_2[2];
          uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
          uStack_60 = (undefined4)param_2[3];
          uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
          (*(code *)PTR_from_shared_0079a410)();
          lVar5 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,local_d0));
          if (lVar5 == 0) {
            param_1[1] = local_c8;
            *param_1 = 0xff;
            return param_1;
          }
          *(ulonglong *)(param_1 + 0x48) = CONCAT71(uStack_b7,uStack_b8);
          *(ulonglong *)(param_1 + 0x50) = CONCAT26(uStack_aa,CONCAT42(uStack_ae,uStack_b0));
          *(ulonglong *)(param_1 + 0x39) =
               CONCAT17(uStack_c0,CONCAT16(bStack_c1,CONCAT24(uStack_c3,uStack_c7)));
          *(ulonglong *)(param_1 + 0x41) = CONCAT17(uStack_b8,uStack_bf);
          *(undefined ***)(param_1 + 0x10) =
               &anon_bcaf87de99d057d323c29a40ccb44f29_3_llvm_7548096389760896325;
          param_1[0x18] = 1;
          param_1[0x19] = 0;
          param_1[0x1a] = 0;
          param_1[0x1b] = 0;
          param_1[0x1c] = 0;
          param_1[0x1d] = 0;
          param_1[0x1e] = 0;
          param_1[0x1f] = 0;
          *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
          *(longlong *)(param_1 + 0x30) = lVar5;
          param_1[0x38] = local_c8;
          *param_1 = 0;
          return param_1;
        }
        local_a8 = *param_2;
        lStack_a0 = param_2[1];
        local_98 = (undefined4)param_2[2];
        uStack_94 = *(undefined4 *)((longlong)param_2 + 0x14);
        uStack_90 = (undefined4)param_2[3];
        uStack_8c = *(undefined4 *)((longlong)param_2 + 0x1c);
        plVar14 = (longlong *)
                  <http[56314f485c23ccf6]::uri::scheme::Scheme2<usize>>::parse
                            (&local_d0,lStack_a0,param_2[2]);
        bVar13 = bStack_cf;
        bVar3 = local_d0;
        if (local_d0 == 0xff) {
          param_1[1] = bStack_cf;
          *param_1 = 0xff;
        }
        else {
          if (local_d0 != 0) {
            if (local_d0 == 1) {
              (*(code *)PTR_split_to_0079a560)(plVar14,(ulonglong)bStack_cf + 7);
              plVar14 = (longlong *)
                        (**(code **)(CONCAT62(uStack_ce,CONCAT11(bStack_cf,local_d0)) + 0x20))();
              local_d1 = bVar13 & 1;
            }
            else {
              lVar5 = CONCAT17(bStack_c1,CONCAT25(uStack_c3,CONCAT41(uStack_c7,local_c8)));
              uVar15 = (*(code *)PTR_split_to_0079a560)(plVar14,lVar5 + 3);
              (*(code *)PTR_split_off_0079a570)(uVar15,lVar5);
              (**(code **)(CONCAT62(uStack_ce,CONCAT11(bStack_cf,local_d0)) + 0x20))();
              local_88 = local_78;
              lStack_80 = lStack_70;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              plVar6 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
              if (plVar6 == (longlong *)0x0) {
                (*(code *)PTR_handle_alloc_error_007991d8)();
                goto LAB_006c2e35;
              }
              *plVar6 = (longlong)local_88;
              plVar6[1] = lStack_80;
              plVar6[2] = CONCAT44(uStack_64,local_68);
              plVar6[3] = CONCAT44(uStack_5c,uStack_60);
              plVar14 = local_88;
              local_88 = plVar6;
            }
          }
          lVar5 = CONCAT44(uStack_94,local_98);
          if (lVar5 == 0) {
            bVar13 = 10;
          }
          else {
            uVar11 = 0;
            bVar12 = false;
            bVar10 = false;
            bVar9 = false;
            lVar8 = 0;
            lVar7 = lVar5;
            do {
              switch((&anon_809aa85601fcd5f6c1e3ec3b485d3fbb_2_llvm_6725535049101062869)
                     [*(byte *)(lStack_a0 + lVar8)]) {
              case 0x23:
              case 0x2f:
              case 0x3f:
                goto switchD_006c2af9_caseD_23;
              case 0x24:
              case 0x25:
              case 0x26:
              case 0x27:
              case 0x28:
              case 0x29:
              case 0x2a:
              case 0x2b:
              case 0x2c:
              case 0x2d:
              case 0x2e:
              case 0x30:
              case 0x31:
              case 0x32:
              case 0x33:
              case 0x34:
              case 0x35:
              case 0x36:
              case 0x37:
              case 0x38:
              case 0x39:
              case 0x3b:
              case 0x3c:
              case 0x3d:
              case 0x3e:
              case 0x41:
              case 0x42:
              case 0x43:
              case 0x44:
              case 0x45:
              case 0x46:
              case 0x47:
              case 0x48:
              case 0x49:
              case 0x4a:
              case 0x4b:
              case 0x4c:
              case 0x4d:
              case 0x4e:
              case 0x4f:
              case 0x50:
              case 0x51:
              case 0x52:
              case 0x53:
              case 0x54:
              case 0x55:
              case 0x56:
              case 0x57:
              case 0x58:
              case 0x59:
              case 0x5a:
              case 0x5c:
                break;
              case 0x3a:
                if (7 < uVar11) {
                  bVar13 = 2;
                  goto LAB_006c2ceb;
                }
                uVar11 = uVar11 + 1;
                break;
              case 0x40:
                lVar7 = lVar8;
                goto LAB_006c2ace;
              case 0x5b:
                bVar13 = 2;
                if ((bVar9) || (bVar12)) goto LAB_006c2ceb;
                bVar12 = true;
                bVar9 = false;
                break;
              case 0x5d:
                bVar13 = 2;
                if ((bVar12 != true) || (bVar10)) goto LAB_006c2ceb;
                bVar10 = true;
                bVar12 = true;
LAB_006c2ace:
                bVar9 = false;
                uVar11 = 0;
                break;
              default:
                if (((&anon_809aa85601fcd5f6c1e3ec3b485d3fbb_2_llvm_6725535049101062869)
                     [*(byte *)(lStack_a0 + lVar8)] == '\0') &&
                   (bVar9 = true, *(byte *)(lStack_a0 + lVar8) != 0x25)) {
                  bVar13 = 0;
                  goto LAB_006c2ceb;
                }
              }
              lVar8 = lVar8 + 1;
            } while (lVar5 != lVar8);
            lVar8 = lVar5;
switchD_006c2af9_caseD_23:
            bVar13 = 2;
            if ((uVar11 < 2 && bVar12 == bVar10) && ((lVar7 != lVar8 + -1 || lVar8 == 0) && !bVar9))
            {
              if (bVar3 == 0) {
                if (lVar8 == lVar5) {
                  *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_94,local_98);
                  *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_8c,uStack_90);
                  *(longlong *)(param_1 + 0x10) = local_a8;
                  *(longlong *)(param_1 + 0x18) = lStack_a0;
                  *param_1 = 0;
                  param_1[1] = local_d1;
                  *(longlong **)(param_1 + 8) = local_88;
                  goto LAB_006c29c2;
                }
                param_1[0] = 0xff;
                param_1[1] = 4;
                goto LAB_006c2d22;
              }
              if (lVar8 != 0) {
                (*(code *)PTR_split_to_0079a560)();
                if (CONCAT44(uStack_94,local_98) != 0) {
                  local_68 = local_98;
                  uStack_64 = uStack_94;
                  uStack_60 = uStack_90;
                  uStack_5c = uStack_8c;
                  local_78 = (longlong *)local_a8;
                  lStack_70 = lStack_a0;
                  (*(code *)PTR_from_shared_0079a410)();
                  lVar5 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,local_d0));
                  if (lVar5 != 0) {
                    *(undefined4 *)(param_1 + 0x52) = uStack_ae;
                    *(undefined2 *)(param_1 + 0x56) = uStack_aa;
                    *param_1 = bVar3;
                    param_1[1] = local_d1;
                    *(longlong **)(param_1 + 8) = local_88;
                    *(longlong *)(param_1 + 0x10) = local_50;
                    *(undefined8 *)(param_1 + 0x18) = local_48;
                    *(undefined8 *)(param_1 + 0x20) = local_40;
                    *(undefined8 *)(param_1 + 0x28) = local_38;
                    *(longlong *)(param_1 + 0x30) = lVar5;
                    param_1[0x38] = local_c8;
                    param_1[0x3f] = bStack_c1;
                    *(undefined2 *)(param_1 + 0x3d) = uStack_c3;
                    *(undefined4 *)(param_1 + 0x39) = uStack_c7;
                    *(ulonglong *)(param_1 + 0x40) = CONCAT71(uStack_bf,uStack_c0);
                    *(ulonglong *)(param_1 + 0x48) = CONCAT71(uStack_b7,uStack_b8);
                    *(undefined2 *)(param_1 + 0x50) = uStack_b0;
                    return param_1;
                  }
                  param_1[1] = local_c8;
                  *param_1 = 0xff;
                  uVar15 = (**(code **)(local_50 + 0x20))(0,local_40);
                  if (bVar3 == 1) {
                    return param_1;
                  }
                  uVar15 = (**(code **)(*local_88 + 0x20))(uVar15,local_88[2]);
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,8);
                  return param_1;
                }
                *param_1 = bVar3;
                param_1[1] = local_d1;
                *(longlong **)(param_1 + 8) = local_88;
                *(longlong *)(param_1 + 0x10) = local_50;
                *(undefined8 *)(param_1 + 0x18) = local_48;
                *(undefined8 *)(param_1 + 0x20) = local_40;
                *(undefined8 *)(param_1 + 0x28) = local_38;
                *(undefined ***)(param_1 + 0x30) =
                     &anon_bcaf87de99d057d323c29a40ccb44f29_3_llvm_7548096389760896325;
                param_1[0x38] = 0xb4;
                param_1[0x3f] = 0;
                param_1[0x3d] = 0;
                param_1[0x3e] = 0;
                param_1[0x39] = 0x80;
                param_1[0x3a] = 0x1a;
                param_1[0x3b] = 0;
                param_1[0x3c] = 0;
                param_1[0x40] = 1;
                param_1[0x41] = 0;
                param_1[0x42] = 0;
                param_1[0x43] = 0;
                param_1[0x44] = 0;
                param_1[0x45] = 0;
                param_1[0x46] = 0;
                param_1[0x47] = 0;
                param_1[0x48] = 0;
                param_1[0x49] = 0;
                param_1[0x4a] = 0;
                param_1[0x4b] = 0;
                param_1[0x4c] = 0;
                param_1[0x4d] = 0;
                param_1[0x4e] = 0;
                param_1[0x4f] = 0;
                param_1[0x50] = 0xff;
                param_1[0x51] = 0xff;
                lVar5 = local_a8;
                goto LAB_006c296f;
              }
              bVar13 = 4;
            }
          }
LAB_006c2ceb:
          param_1[1] = bVar13;
          *param_1 = 0xff;
          if (1 < bVar3) {
            uVar15 = (**(code **)(*local_88 + 0x20))(plVar14,local_88[2]);
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,8);
          }
        }
LAB_006c2d22:
        lVar5 = local_a8;
        goto LAB_006c296f;
      }
      if (*(char *)param_2[1] == '*') {
        *param_1 = 0;
        *(undefined ***)(param_1 + 0x10) =
             &anon_bcaf87de99d057d323c29a40ccb44f29_3_llvm_7548096389760896325;
        param_1[0x18] = 1;
        param_1[0x19] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
        *(undefined ***)(param_1 + 0x30) =
             &anon_bcaf87de99d057d323c29a40ccb44f29_3_llvm_7548096389760896325;
        puVar4 = &DAT_001a80b5;
      }
      else {
        if (*(char *)param_2[1] != '/') {
          (*(code *)PTR_from_shared_0079a568)();
          lVar5 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,local_d0));
          if (lVar5 == 0) {
            param_1[1] = local_c8;
            *param_1 = 0xff;
            return param_1;
          }
          *(ulonglong *)(param_1 + 0x28) = CONCAT71(uStack_b7,uStack_b8);
          *(ulonglong *)(param_1 + 0x19) =
               CONCAT17(uStack_c0,CONCAT16(bStack_c1,CONCAT24(uStack_c3,uStack_c7)));
          *(ulonglong *)(param_1 + 0x21) = CONCAT17(uStack_b8,uStack_bf);
          *param_1 = 0;
          *(longlong *)(param_1 + 0x10) = lVar5;
          param_1[0x18] = local_c8;
LAB_006c29c2:
          *(undefined ***)(param_1 + 0x30) =
               &anon_bcaf87de99d057d323c29a40ccb44f29_3_llvm_7548096389760896325;
          param_1[0x38] = 1;
          param_1[0x39] = 0;
          param_1[0x3a] = 0;
          param_1[0x3b] = 0;
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
          *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
          param_1[0x50] = 0xff;
          param_1[0x51] = 0xff;
          return param_1;
        }
        *param_1 = 0;
        *(undefined ***)(param_1 + 0x10) =
             &anon_bcaf87de99d057d323c29a40ccb44f29_3_llvm_7548096389760896325;
        param_1[0x18] = 1;
        param_1[0x19] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
        *(undefined ***)(param_1 + 0x30) =
             &anon_bcaf87de99d057d323c29a40ccb44f29_3_llvm_7548096389760896325;
        puVar4 = &DAT_001a80b4;
      }
      *(undefined **)(param_1 + 0x38) = puVar4;
      param_1[0x40] = 1;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[0x48] = 0;
      param_1[0x49] = 0;
      param_1[0x4a] = 0;
      param_1[0x4b] = 0;
      param_1[0x4c] = 0;
      param_1[0x4d] = 0;
      param_1[0x4e] = 0;
      param_1[0x4f] = 0;
      param_1[0x50] = 0xff;
      param_1[0x51] = 0xff;
    }
  }
  else {
    param_1[0] = 0xff;
    param_1[1] = 9;
  }
  lVar5 = *param_2;
LAB_006c296f:
  (**(code **)(lVar5 + 0x20))();
  return param_1;
}


