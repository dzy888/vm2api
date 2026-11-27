// 0045ba20 <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::license::Term_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>

/* <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>
   as 
   serde_core[48776c27239fa21f]::de::EnumAccess>::variant_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::license::Term
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>> */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
::variant_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::license::Term_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
          (undefined1 *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_38;
  short *local_30;
  longlong local_28;
  
  uVar5 = *(ulonglong *)(param_2 + 0x20);
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 < uVar5) {
    do {
      uVar3 = uVar3 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar3);
      uVar6 = (ulonglong)bVar1;
      if (0x22 < uVar6) {
LAB_0045bbb4:
        if (bVar1 == 0x7d) {
          local_38 = 10;
        }
        else {
          local_38 = 0x11;
        }
        goto LAB_0045bba4;
      }
      if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
        if (uVar6 != 0x22) goto LAB_0045bbb4;
        *(ulonglong *)(param_2 + 0x28) = uVar3;
        *(undefined8 *)(param_2 + 0x10) = 0;
        (*(code *)PTR_parse_str_007998f8)(-uVar5,param_2);
        if ((int)local_38 != 2) {
          if (local_28 == 2) {
            if (*local_30 == anon_ec7f14c74815bf4c93b295cfd0665412_123_llvm_7806621557641746444) {
              uVar2 = 0;
              uVar5 = *(ulonglong *)(param_2 + 0x20);
              uVar3 = *(ulonglong *)(param_2 + 0x28);
              if (uVar5 <= uVar3) break;
            }
            else {
              if (*local_30 == anon_ec7f14c74815bf4c93b295cfd0665412_124_llvm_7806621557641746444) {
                uVar2 = 1;
              }
              else {
                if (*local_30 == anon_ec7f14c74815bf4c93b295cfd0665412_125_llvm_7806621557641746444)
                {
                  uVar2 = 2;
                  uVar5 = *(ulonglong *)(param_2 + 0x20);
                  uVar3 = *(ulonglong *)(param_2 + 0x28);
                  if (uVar3 < uVar5) goto LAB_0045bb3e;
                  break;
                }
                uVar2 = 3;
                if (*local_30 != anon_ec7f14c74815bf4c93b295cfd0665412_126_llvm_7806621557641746444)
                goto LAB_0045baf9;
              }
              uVar5 = *(ulonglong *)(param_2 + 0x20);
              uVar3 = *(ulonglong *)(param_2 + 0x28);
              if (uVar5 <= uVar3) break;
            }
LAB_0045bb3e:
            goto LAB_0045bb47;
          }
LAB_0045baf9:
          local_30 = (short *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                              ::unknown_variant(local_30,local_28,
                                                &
                                                anon_ec7f14c74815bf4c93b295cfd0665412_157_llvm_7806621557641746444
                                                ,4);
        }
        uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                          (local_30,param_2);
        goto LAB_0045bb15;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3;
    } while (uVar3 != uVar5);
  }
  goto LAB_0045bb9c;
  while( true ) {
    if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
      if (uVar6 == 0x3a) {
        *(ulonglong *)(param_2 + 0x28) = uVar3;
        *param_1 = uVar2;
        *(longlong *)(param_1 + 8) = param_2;
        return param_1;
      }
      goto LAB_0045bbcd;
    }
    *(ulonglong *)(param_2 + 0x28) = uVar3;
    if (uVar3 == uVar5) break;
LAB_0045bb47:
    uVar3 = uVar3 + 1;
    uVar6 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar3);
    if (0x3a < uVar6) {
LAB_0045bbcd:
      local_38 = 6;
      goto LAB_0045bba4;
    }
  }
LAB_0045bb9c:
  local_38 = 3;
LAB_0045bba4:
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_38);
LAB_0045bb15:
  *(undefined8 *)(param_1 + 8) = uVar4;
  *param_1 = 0xff;
  return param_1;
}


