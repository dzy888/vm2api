// 006c4880 from_shared

/* <http[56314f485c23ccf6]::uri::authority::Authority>::from_shared */

longlong * __rustcall
<http[56314f485c23ccf6]::uri::authority::Authority>::from_shared
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  lVar1 = param_2[2];
  if (lVar1 == 0) {
    uVar5 = 10;
  }
  else {
    uVar7 = 0;
    bVar8 = false;
    bVar2 = false;
    bVar3 = false;
    lVar4 = 0;
    lVar6 = lVar1;
    do {
      switch((&anon_809aa85601fcd5f6c1e3ec3b485d3fbb_2_llvm_6725535049101062869)
             [*(byte *)(param_2[1] + lVar4)]) {
      case 0x23:
      case 0x2f:
      case 0x3f:
        goto switchD_006c48eb_caseD_23;
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
        if (7 < uVar7) {
          uVar5 = 2;
          goto LAB_006c49a1;
        }
        uVar7 = uVar7 + 1;
        break;
      case 0x40:
        lVar6 = lVar4;
        goto LAB_006c48c6;
      case 0x5b:
        uVar5 = 2;
        if ((bVar3) || (bVar8)) goto LAB_006c49a1;
        bVar8 = true;
        bVar3 = false;
        break;
      case 0x5d:
        uVar5 = 2;
        if ((bVar8 != true) || (bVar2)) goto LAB_006c49a1;
        bVar2 = true;
        bVar8 = true;
LAB_006c48c6:
        bVar3 = false;
        uVar7 = 0;
        break;
      default:
        if (((&anon_809aa85601fcd5f6c1e3ec3b485d3fbb_2_llvm_6725535049101062869)
             [*(byte *)(param_2[1] + lVar4)] == '\0') &&
           (bVar3 = true, *(byte *)(param_2[1] + lVar4) != 0x25)) goto LAB_006c499a;
      }
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar4);
    lVar4 = lVar1;
switchD_006c48eb_caseD_23:
    uVar5 = 2;
    if ((uVar7 < 2 && bVar8 == bVar2) && ((lVar6 != lVar4 + -1 || lVar4 == 0) && !bVar3)) {
      if (lVar4 == lVar1) {
        lVar1 = *param_2;
        lVar4 = param_2[1];
        lVar6 = param_2[3];
        param_1[2] = param_2[2];
        param_1[3] = lVar6;
        *param_1 = lVar1;
        param_1[1] = lVar4;
        return param_1;
      }
LAB_006c499a:
      uVar5 = 0;
    }
  }
LAB_006c49a1:
  *(undefined1 *)(param_1 + 1) = uVar5;
  *param_1 = 0;
  (**(code **)(*param_2 + 0x20))();
  return param_1;
}


