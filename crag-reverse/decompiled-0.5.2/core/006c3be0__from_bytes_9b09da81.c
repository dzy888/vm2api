// 006c3be0 from_bytes

/* <http[56314f485c23ccf6]::method::Method>::from_bytes */

undefined1 * __rustcall
<http[56314f485c23ccf6]::method::Method>::from_bytes
          (undefined1 *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,char param_5)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  char *in_R10;
  char cVar9;
  char local_70;
  char local_6c;
  byte *local_68;
  char local_60;
  char local_5c;
  char local_58;
  char local_54;
  char local_50;
  char local_4c;
  undefined1 *local_48;
  ulonglong local_40;
  char local_38;
  char local_34;
  
  switch(param_3) {
  case 0:
    break;
  default:
    if (0xf < param_3) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar6 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
      if (lVar6 != 0) {
        uVar7 = 0;
        do {
          if (""[param_2[uVar7]] == '\0') {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
            *param_1 = 0xff;
            return param_1;
          }
          *(char *)(lVar6 + uVar7) = ""[param_2[uVar7]];
          uVar7 = uVar7 + 1;
        } while (param_3 != uVar7);
        *param_1 = 0xb;
        *(longlong *)(param_1 + 8) = lVar6;
        *(ulonglong *)(param_1 + 0x10) = param_3;
        return param_1;
      }
      cVar5 = (*(code *)PTR_handle_error_00798ff0)();
LAB_006c4561:
      cVar8 = in_R10[local_68[0xc]];
      param_1 = local_48;
      if (cVar8 == '\0') break;
      param_3 = local_40;
      if (local_40 == 0xd) {
        cVar9 = '\0';
      }
      else {
        cVar9 = in_R10[local_68[0xd]];
        if (cVar9 == '\0') break;
        if (local_40 != 0xe) {
          local_68._0_1_ = in_R10[local_68[0xe]];
          if ((char)local_68 == '\0') break;
          goto LAB_006c41a1;
        }
      }
      local_68._0_1_ = '\0';
      goto LAB_006c41a1;
    }
    if (param_3 == 0) {
      local_58 = '\0';
      local_50 = '\0';
      local_4c = '\0';
      local_54 = '\0';
      local_38 = '\0';
      cVar5 = '\0';
      param_5 = '\0';
      cVar8 = '\0';
      cVar9 = '\0';
      local_68._0_1_ = '\0';
      local_5c = '\0';
      local_60 = '\0';
      local_6c = '\0';
      local_70 = '\0';
      local_34 = '\0';
      goto LAB_006c41a1;
    }
    in_R10 = "";
    local_34 = ""[*param_2];
    if (local_34 == '\0') break;
    if (param_3 == 1) {
      local_58 = '\0';
      local_50 = '\0';
      local_4c = '\0';
      local_54 = '\0';
      local_38 = '\0';
      cVar5 = '\0';
      param_5 = '\0';
      cVar8 = '\0';
      cVar9 = '\0';
      local_68._0_1_ = '\0';
      local_5c = '\0';
      local_60 = '\0';
      local_6c = '\0';
      local_70 = '\0';
      goto LAB_006c41a1;
    }
    local_70 = ""[param_2[1]];
    if (local_70 == '\0') break;
    if (param_3 == 2) {
      local_58 = '\0';
      local_50 = '\0';
      local_4c = '\0';
      local_54 = '\0';
      local_38 = '\0';
      cVar5 = '\0';
      param_5 = '\0';
      cVar8 = '\0';
      cVar9 = '\0';
      local_68._0_1_ = '\0';
      local_5c = '\0';
      local_60 = '\0';
      local_6c = '\0';
      goto LAB_006c41a1;
    }
    local_6c = ""[param_2[2]];
    if (local_6c == '\0') break;
    if (param_3 == 3) {
      local_58 = '\0';
      local_50 = '\0';
      local_4c = '\0';
      local_54 = '\0';
      local_38 = '\0';
      cVar5 = '\0';
      param_5 = '\0';
      cVar8 = '\0';
      cVar9 = '\0';
      local_68._0_1_ = '\0';
      local_5c = '\0';
      local_60 = '\0';
      goto LAB_006c41a1;
    }
    local_60 = ""[param_2[3]];
    if (local_60 == '\0') break;
    if (param_3 == 4) {
      local_58 = '\0';
      local_50 = '\0';
      local_4c = '\0';
      local_54 = '\0';
      local_38 = '\0';
      cVar5 = '\0';
      param_5 = '\0';
      cVar8 = '\0';
      cVar9 = '\0';
      local_68._0_1_ = '\0';
      local_5c = '\0';
      goto LAB_006c41a1;
    }
    local_5c = ""[param_2[4]];
    if (local_5c == '\0') break;
    if (param_3 == 5) {
      local_58 = '\0';
LAB_006c4377:
      local_50 = '\0';
LAB_006c437c:
      local_54 = '\0';
      local_4c = '\0';
    }
    else {
      local_58 = ""[param_2[5]];
      if (local_58 == '\0') break;
      if (param_3 == 6) goto LAB_006c4377;
      local_50 = ""[param_2[6]];
      if (local_50 == '\0') break;
      if (param_3 == 7) goto LAB_006c437c;
      local_4c = ""[param_2[7]];
      if (local_4c == '\0') break;
      if (param_3 == 8) {
        local_54 = '\0';
      }
      else {
        local_54 = ""[param_2[8]];
        if (local_54 == '\0') break;
        if (param_3 != 9) {
          local_38 = ""[param_2[9]];
          if (local_38 == '\0') break;
          if (param_3 == 10) {
            cVar5 = '\0';
            param_5 = '\0';
          }
          else {
            cVar5 = ""[param_2[10]];
            if (cVar5 == '\0') break;
            if (param_3 == 0xb) {
              param_5 = '\0';
            }
            else {
              param_5 = ""[param_2[0xb]];
              if (param_5 == '\0') break;
              local_68 = param_2;
              local_48 = param_1;
              local_40 = param_3;
              if (param_3 != 0xc) goto LAB_006c4561;
            }
          }
          cVar8 = '\0';
          cVar9 = '\0';
          local_68._0_1_ = '\0';
          goto LAB_006c41a1;
        }
      }
    }
    local_68._0_1_ = '\0';
    cVar8 = '\0';
    cVar9 = '\0';
    param_5 = '\0';
    cVar5 = '\0';
    local_38 = '\0';
LAB_006c41a1:
    param_1[1] = local_34;
    param_1[2] = local_70;
    param_1[3] = local_6c;
    param_1[4] = local_60;
    param_1[5] = local_5c;
    param_1[6] = local_58;
    param_1[7] = local_50;
    param_1[8] = local_4c;
    param_1[9] = local_54;
    param_1[10] = local_38;
    param_1[0xb] = cVar5;
    param_1[0xc] = param_5;
    param_1[0xd] = cVar8;
    param_1[0xe] = cVar9;
    param_1[0xf] = (char)local_68;
    *param_1 = 10;
    param_1[0x10] = (char)param_3;
    return param_1;
  case 3:
    bVar1 = *param_2;
    if (bVar1 == 0x47) {
      if ((param_2[1] == 0x45) && (param_2[2] == 0x54)) {
        *param_1 = 1;
        return param_1;
      }
    }
    else if (((bVar1 == 0x50) && (param_2[1] == 0x55)) && (param_2[2] == 0x54)) {
      *param_1 = 3;
      return param_1;
    }
    if (((""[bVar1] != '\0') && (cVar5 = ""[param_2[1]], cVar5 != '\0')) &&
       (cVar8 = ""[param_2[2]], cVar8 != '\0')) {
      param_1[1] = ""[bVar1];
      param_1[2] = cVar5;
      param_1[3] = cVar8;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *param_1 = 10;
      param_1[0x10] = 3;
      return param_1;
    }
    break;
  case 4:
    bVar1 = *param_2;
    if (bVar1 == 0x48) {
      if (((param_2[1] == 0x45) && (param_2[2] == 0x41)) && (param_2[3] == 0x44)) {
        *param_1 = 5;
        return param_1;
      }
    }
    else if (((bVar1 == 0x50) && (param_2[1] == 0x4f)) &&
            ((param_2[2] == 0x53 && (param_2[3] == 0x54)))) {
      *param_1 = 2;
      return param_1;
    }
    if (((""[bVar1] != '\0') && (cVar5 = ""[param_2[1]], cVar5 != '\0')) &&
       ((cVar8 = ""[param_2[2]], cVar8 != '\0' && (cVar9 = ""[param_2[3]], cVar9 != '\0')))) {
      param_1[1] = ""[bVar1];
      param_1[2] = cVar5;
      param_1[3] = cVar8;
      param_1[4] = cVar9;
      *(undefined8 *)(param_1 + 5) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *param_1 = 10;
      param_1[0x10] = 4;
      return param_1;
    }
    break;
  case 5:
    bVar1 = *param_2;
    if (bVar1 == 0x50) {
      if (((param_2[1] == 0x41) && (param_2[2] == 0x54)) &&
         ((param_2[3] == 0x43 && (param_2[4] == 0x48)))) {
        *param_1 = 8;
        return param_1;
      }
    }
    else if (bVar1 == 0x51) {
      if (((param_2[1] == 0x55) && (param_2[2] == 0x45)) &&
         ((param_2[3] == 0x52 && (param_2[4] == 0x59)))) {
        *param_1 = 9;
        return param_1;
      }
    }
    else if ((((bVar1 == 0x54) && (param_2[1] == 0x52)) && (param_2[2] == 0x41)) &&
            ((param_2[3] == 0x43 && (param_2[4] == 0x45)))) {
      *param_1 = 6;
      return param_1;
    }
    if (((""[bVar1] != '\0') && (cVar5 = ""[param_2[1]], cVar5 != '\0')) &&
       ((cVar8 = ""[param_2[2]], cVar8 != '\0' &&
        ((cVar9 = ""[param_2[3]], cVar9 != '\0' && (cVar2 = ""[param_2[4]], cVar2 != '\0')))))) {
      param_1[1] = ""[bVar1];
      param_1[2] = cVar5;
      param_1[3] = cVar8;
      param_1[4] = cVar9;
      param_1[5] = cVar2;
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined2 *)(param_1 + 0xe) = 0;
      *param_1 = 10;
      param_1[0x10] = 5;
      return param_1;
    }
    break;
  case 6:
    if (((((ulonglong)*param_2 == 0x44) && (param_2[1] == 0x45)) && (param_2[2] == 0x4c)) &&
       (((param_2[3] == 0x45 && (param_2[4] == 0x54)) && (param_2[5] == 0x45)))) {
      *param_1 = 4;
      return param_1;
    }
    if (((""[*param_2] != '\0') && (cVar5 = ""[param_2[1]], cVar5 != '\0')) &&
       ((cVar8 = ""[param_2[2]], cVar8 != '\0' &&
        (((cVar9 = ""[param_2[3]], cVar9 != '\0' && (cVar2 = ""[param_2[4]], cVar2 != '\0')) &&
         (cVar3 = ""[param_2[5]], cVar3 != '\0')))))) {
      param_1[1] = ""[*param_2];
      param_1[2] = cVar5;
      param_1[3] = cVar8;
      param_1[4] = cVar9;
      param_1[5] = cVar2;
      param_1[6] = cVar3;
      *(undefined8 *)(param_1 + 7) = 0;
      *(undefined2 *)(param_1 + 0xf) = 0x600;
      *param_1 = 10;
      return param_1;
    }
    break;
  case 7:
    bVar1 = *param_2;
    if (bVar1 == 0x43) {
      if ((((param_2[1] == 0x4f) && (param_2[2] == 0x4e)) && (param_2[3] == 0x4e)) &&
         (((param_2[4] == 0x45 && (param_2[5] == 0x43)) && (param_2[6] == 0x54)))) {
        *param_1 = 7;
        return param_1;
      }
    }
    else if (((bVar1 == 0x4f) && (param_2[1] == 0x50)) &&
            ((param_2[2] == 0x54 &&
             ((((param_2[3] == 0x49 && (param_2[4] == 0x4f)) && (param_2[5] == 0x4e)) &&
              (param_2[6] == 0x53)))))) {
      *param_1 = 0;
      return param_1;
    }
    if (((""[bVar1] != '\0') && (cVar5 = ""[param_2[1]], cVar5 != '\0')) &&
       ((((cVar8 = ""[param_2[2]], cVar8 != '\0' &&
          ((cVar9 = ""[param_2[3]], cVar9 != '\0' && (cVar2 = ""[param_2[4]], cVar2 != '\0')))) &&
         (cVar3 = ""[param_2[5]], cVar3 != '\0')) && (cVar4 = ""[param_2[6]], cVar4 != '\0')))) {
      param_1[1] = ""[bVar1];
      param_1[2] = cVar5;
      param_1[3] = cVar8;
      param_1[4] = cVar9;
      param_1[5] = cVar2;
      param_1[6] = cVar3;
      param_1[7] = cVar4;
      *(undefined8 *)(param_1 + 8) = 0;
      *param_1 = 10;
      param_1[0x10] = 7;
      return param_1;
    }
  }
  *param_1 = 0xff;
  return param_1;
}


