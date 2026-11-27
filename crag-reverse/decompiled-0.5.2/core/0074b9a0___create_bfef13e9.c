// 0074b9a0 _create

/* <std[6c98fd8553dbae28]::fs::DirBuilder>::_create */

char * __rustcall
<std[6c98fd8553dbae28]::fs::DirBuilder>::_create(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  char *extraout_RDX_02;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  char *local_168;
  char *local_160;
  undefined1 local_158;
  undefined4 local_130;
  char *local_b8;
  char *local_b0;
  undefined1 local_a8;
  undefined2 local_80;
  undefined1 local_7e;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  longlong local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  
  if (param_1[4] == '\0') {
    pcVar9 = (char *)<std[6c98fd8553dbae28]::sys::fs::unix::DirBuilder>::mkdir
                               (param_1,param_2,param_3);
    return pcVar9;
  }
  if (param_3 == (char *)0x0) {
    local_7e = false;
  }
  else {
    local_7e = *param_2 == '/';
  }
  local_a8 = 0xff;
  local_80 = 0x201;
  local_168 = (char *)0x1;
  local_160 = (char *)0x0;
  local_158 = 0xff;
  local_130._2_2_ = (ushort)(local_130 >> 0x10) & 0xff00;
  local_130 = CONCAT22(local_130._2_2_,0x201);
  local_b8 = param_2;
  local_b0 = param_3;
  local_40 = param_2;
  cVar1 = <std[6c98fd8553dbae28]::path::Components_as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>::eq
                    (&local_b8,&local_168);
  if (cVar1 == '\0') {
    if (param_3 == (char *)0x0) {
      bVar12 = false;
    }
    else {
      bVar12 = *local_40 == '/';
    }
    local_158 = 0xff;
    local_130 = CONCAT22(CONCAT11(local_130._3_1_,bVar12),0x201);
    uVar5 = extraout_RDX;
    local_168 = local_40;
    local_160 = param_3;
    (*(code *)PTR_next_back_0079a1d8)();
    if ((byte)((char)local_b8 - 7U) < 0xf8) {
      lVar3 = (*(code *)PTR_as_path_0079ac00)();
      auVar13._8_8_ = uVar5;
      auVar13._0_8_ = local_b8;
      pcVar9 = (char *)0x0;
      if (lVar3 == 0) {
        return (char *)0x0;
      }
      pcVar7 = local_40;
      local_78 = param_3;
      do {
        pcVar10 = local_78;
        pcVar6 = auVar13._8_8_;
        local_b8 = auVar13._0_8_;
        if (param_3 == (char *)0x0) {
          bVar12 = false;
        }
        else {
          bVar12 = *pcVar7 == '/';
        }
        local_158 = 0xff;
        local_130 = CONCAT22(CONCAT11(local_130._3_1_,bVar12),0x201);
        local_168 = pcVar7;
        local_160 = param_3;
        local_38 = pcVar7;
        (*(code *)PTR_next_back_0079a1d8)();
        if ((byte)((char)local_b8 - 7U) < 0xf8) {
          local_70 = (char *)(*(code *)PTR_as_path_0079ac00)();
          local_68 = pcVar6;
          if (param_3 == (char *)0x0) goto LAB_0074bb9f;
LAB_0074bb80:
          local_7e = *local_38 == '/';
        }
        else {
          local_70 = (char *)0x0;
          if (param_3 != (char *)0x0) goto LAB_0074bb80;
LAB_0074bb9f:
          local_7e = false;
        }
        pcVar7 = local_38;
        local_a8 = 0xff;
        local_80 = 0x201;
        local_168 = (char *)0x1;
        local_160 = (char *)0x0;
        local_158 = 0xff;
        local_130 = (uint)local_130._3_1_ << 0x18;
        local_130 = CONCAT22(local_130._2_2_,0x201);
        local_b8 = local_38;
        local_b0 = param_3;
        cVar1 = <std[6c98fd8553dbae28]::path::Components_as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>
                ::eq(&local_b8,&local_168);
        auVar13._8_8_ = extraout_RDX_00;
        auVar13._0_8_ = local_b8;
        if (cVar1 != '\0') break;
        if (param_3 == (char *)0x0) {
          bVar12 = false;
        }
        else {
          bVar12 = *pcVar7 == '/';
        }
        local_158 = 0xff;
        local_130 = CONCAT22(CONCAT11(local_130._3_1_,bVar12),0x201);
        uVar5 = extraout_RDX_00;
        local_168 = pcVar7;
        local_160 = param_3;
        (*(code *)PTR_next_back_0079a1d8)();
        auVar13._8_8_ = uVar5;
        auVar13._0_8_ = local_b8;
        if (0xf7 < (byte)((char)local_b8 - 7U)) break;
        lVar3 = (*(code *)PTR_as_path_0079ac00)();
        pcVar7 = local_38;
        auVar13._8_8_ = uVar5;
        auVar13._0_8_ = local_b8;
        if (lVar3 == 0) break;
        local_48 = pcVar9;
        auVar13 = <std[6c98fd8553dbae28]::sys::fs::unix::DirBuilder>::mkdir
                            (param_1,local_38,param_3);
        uVar5 = auVar13._8_8_;
        pcVar9 = auVar13._0_8_;
        if (pcVar9 == (char *)0x0) {
LAB_0074bdeb:
          pcVar9 = local_48;
          pcVar10 = local_78;
          break;
        }
        uVar11 = auVar13._0_4_ & 3;
        cVar1 = auVar13[4];
        switch(uVar11) {
        case 0:
          cVar2 = pcVar9[0x10];
          break;
        case 1:
          cVar2 = pcVar9[0x1f];
          break;
        case 2:
          local_b8 = pcVar9;
          lVar3 = (*(code *)PTR_get_os_functions_007992e0)();
          cVar2 = (**(code **)(lVar3 + 8))();
          auVar13._8_8_ = uVar5;
          auVar13._0_8_ = local_b8;
          break;
        case 3:
          cVar2 = cVar1;
        }
        param_3 = local_68;
        uVar5 = auVar13._8_8_;
        local_b8 = auVar13._0_8_;
        if (cVar2 != '\0') {
          switch(uVar11) {
          case 0:
            cVar1 = pcVar9[0x10];
            break;
          case 1:
            cVar1 = pcVar9[0x1f];
            break;
          case 2:
            lVar3 = (*(code *)PTR_get_os_functions_007992e0)();
            cVar1 = (**(code **)(lVar3 + 8))();
            break;
          case 3:
          }
          if (cVar1 != '\f') {
            return pcVar9;
          }
          (*(code *)PTR_metadata_00799308)();
          if ((int)local_168 == 2) {
            if (((uint)local_160 & 3) - 2 < 2) {
              return pcVar9;
            }
            if (((ulonglong)local_160 & 3) == 0) {
              return pcVar9;
            }
            local_160 = local_160 + -1;
            local_168 = (char *)CONCAT71(local_168._1_7_,3);
            (*(code *)PTR_drop_00799040)();
            return pcVar9;
          }
          if ((local_130 & 0xf000) != 0x4000) {
            return pcVar9;
          }
          local_168 = pcVar9;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                    (&local_168,pcVar7);
          auVar13._8_8_ = extraout_RDX_01;
          auVar13._0_8_ = local_b8;
          goto LAB_0074bdeb;
        }
        if ((1 < uVar11 - 2) && (uVar11 != 0)) {
          local_160 = pcVar9 + -1;
          local_168 = (char *)CONCAT71(local_168._1_7_,3);
          (*(code *)PTR_drop_00799040)();
          auVar13._8_8_ = uVar5;
          auVar13._0_8_ = local_b8;
        }
        pcVar9 = local_48 + 1;
        pcVar7 = local_70;
        pcVar10 = local_78;
      } while (local_70 != (char *)0x0);
      pcVar7 = (char *)((longlong)pcVar9 * 0x10);
      if (pcVar7 < (char *)0x7ffffffffffffff9 && (ulonglong)pcVar9 >> 0x3c == 0) goto LAB_0074be29;
      do {
        uVar5 = auVar13._8_8_;
        local_b8 = auVar13._0_8_;
        (*(code *)PTR_handle_error_00798ff0)();
        auVar13._8_8_ = uVar5;
        auVar13._0_8_ = local_b8;
LAB_0074be29:
        uVar5 = auVar13._8_8_;
        local_b8 = auVar13._0_8_;
        if (pcVar7 == (char *)0x0) {
          local_58 = 8;
          local_60 = (char *)0x0;
          break;
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_58 = (*(code *)PTR___rust_alloc_00799000)();
        auVar13._8_8_ = uVar5;
        auVar13._0_8_ = local_b8;
        local_60 = pcVar9;
      } while (local_58 == 0);
      local_b8 = auVar13._0_8_;
      local_50 = (char *)0x0;
      local_38 = (char *)local_58;
      if (pcVar9 != (char *)0x0) {
        pcVar8 = (char *)0x0;
        pcVar6 = local_40;
        local_70 = param_1;
        local_68 = pcVar7;
        local_48 = pcVar9;
        do {
          pcVar7 = local_50;
          pcVar9 = auVar13._8_8_;
          local_b8 = auVar13._0_8_;
          if (pcVar6 == (char *)0x0) {
            local_38 = (char *)local_58;
            pcVar9 = pcVar8;
            pcVar7 = (char *)local_58;
            if (pcVar8 == (char *)0x0) goto LAB_0074bf84;
            break;
          }
          if (pcVar10 == (char *)0x0) {
            bVar12 = false;
          }
          else {
            bVar12 = *pcVar6 == '/';
          }
          local_158 = 0xff;
          local_130 = CONCAT22(CONCAT11(local_130._3_1_,bVar12),0x201);
          local_168 = pcVar6;
          local_160 = pcVar10;
          (*(code *)PTR_next_back_0079a1d8)();
          if ((byte)((char)local_b8 - 7U) < 0xf8) {
            pcVar4 = (char *)(*(code *)PTR_as_path_0079ac00)();
            local_40 = pcVar9;
          }
          else {
            pcVar4 = (char *)0x0;
          }
          if (pcVar7 == local_60) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_60,pcVar7,1,8,0x10);
            local_38 = (char *)local_58;
            pcVar9 = extraout_RDX_02;
          }
          auVar13._8_8_ = pcVar9;
          auVar13._0_8_ = local_b8;
          *(char **)(pcVar8 + (longlong)local_38) = pcVar6;
          *(char **)(pcVar8 + (longlong)local_38 + 8) = pcVar10;
          local_50 = pcVar7 + 1;
          pcVar8 = pcVar8 + 0x10;
          pcVar9 = local_68;
          pcVar10 = local_40;
          pcVar6 = pcVar4;
          pcVar7 = (char *)local_58;
        } while (local_48 != local_50);
        do {
          local_38 = pcVar7;
          pcVar7 = (char *)<std[6c98fd8553dbae28]::sys::fs::unix::DirBuilder>::mkdir
                                     (local_70,*(undefined8 *)(pcVar9 + (longlong)local_38 + -0x10),
                                      *(undefined8 *)(pcVar9 + (longlong)local_38 + -8));
          if (pcVar7 != (char *)0x0) {
            uVar11 = (uint)pcVar7 & 3;
            local_b8 = pcVar7;
            switch(uVar11) {
            case 0:
              cVar1 = pcVar7[0x10];
              break;
            case 1:
              cVar1 = pcVar7[0x1f];
              break;
            case 2:
              lVar3 = (*(code *)PTR_get_os_functions_007992e0)();
              cVar1 = (**(code **)(lVar3 + 8))();
              break;
            case 3:
              cVar1 = (char)((ulonglong)pcVar7 >> 0x20);
            }
            if (cVar1 != '\f') {
LAB_0074c0e3:
              if (local_60 == (char *)0x0) {
                return pcVar7;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)();
              return pcVar7;
            }
            (*(code *)PTR_metadata_00799308)();
            bVar12 = (int)local_168 == 2;
            if (bVar12) {
              if ((1 < ((uint)local_160 & 3) - 2) && (((ulonglong)local_160 & 3) != 0)) {
                local_160 = local_160 + -1;
                local_168 = (char *)CONCAT71(local_168._1_7_,3);
                (*(code *)PTR_drop_00799040)();
              }
              goto LAB_0074c0e3;
            }
            if ((local_130 & 0xf000) != 0x4000) goto LAB_0074c0e3;
            if ((1 < uVar11 - 2) && (((ulonglong)pcVar7 & 3) != 0)) {
              local_160 = pcVar7 + -1;
              local_168 = (char *)CONCAT71(local_168._1_7_,3);
              (*(code *)PTR_drop_00799040)();
            }
          }
          pcVar9 = pcVar9 + -0x10;
          pcVar7 = local_38;
        } while (pcVar9 != (char *)0x0);
      }
LAB_0074bf84:
      if (local_60 != (char *)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
  }
  return (char *)0x0;
}


