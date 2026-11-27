// 005fc9a0 <&craggemini_core[66f3c71560d70857]::admission::MemorySnapshot>

/* serde_json[dc3825464c436029]::value::to_value::<&craggemini_core[66f3c71560d70857]::admission::MemorySnapshot>
    */

undefined1 * __rustcall
serde_json[dc3825464c436029]::value::to_value::
<&craggemini_core[66f3c71560d70857]::admission::MemorySnapshot>
          (undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_78 = 0xffffffffffffffff;
  uStack_60 = 0;
  uStack_50 = 0;
  lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
          ::serialize_field::<usize>(&local_78,"host_mem_total_bytes",0x14,param_2 + 0x40);
  if (lVar1 == 0) {
    lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
            ::serialize_field::<usize>(&local_78,"host_mem_available_bytes",0x18,param_2 + 0x48);
    if (lVar1 == 0) {
      lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
              ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<u64>>
                        (&local_78,"cgroup_limit_bytes",0x12,param_2);
      if (lVar1 == 0) {
        lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<u64>>
                          (&local_78,"cgroup_current_bytes",0x14,param_2 + 0x10);
        if (lVar1 == 0) {
          lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                  ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<u64>>
                            (&local_78,"effective_limit_bytes",0x15,param_2 + 0x20);
          if (lVar1 == 0) {
            lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                    ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<u64>>
                              (&local_78,"effective_available_bytes",0x19,param_2 + 0x30);
            if (lVar1 == 0) {
              lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                      ::serialize_field::<usize>
                                (&local_78,"total_children_rss_bytes",0x18,param_2 + 0x50);
              if (lVar1 == 0) {
                lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                        ::serialize_field::<usize>
                                  (&local_78,"max_child_rss_bytes",0x13,param_2 + 0x58);
                if (lVar1 == 0) {
                  lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                          ::serialize_field::<usize>
                                    (&local_78,"sampled_children",0x10,param_2 + 0x60);
                  if (lVar1 == 0) {
                    lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                            ::serialize_field::<usize>
                                      (&local_78,
                                       anon_1b4a85c95499e1b671cf4fa96a1b6d0f_70_llvm_10049508496007902178
                                       ,0x10,param_2 + 0x68);
                    if (lVar1 == 0) {
                      lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                              ::serialize_field::<usize>
                                        (&local_78,"slot_rss_soft_limit_bytes",0x19,param_2 + 0x70);
                      if ((lVar1 == 0) &&
                         (lVar1 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                                  ::serialize_field::<bool>
                                            (&local_78,"under_pressure",0xe,param_2 + 0x78),
                         lVar1 == 0)) {
                        local_28 = local_58;
                        uStack_24 = uStack_54;
                        uStack_20 = (undefined4)uStack_50;
                        uStack_1c = uStack_50._4_4_;
                        local_38 = local_68;
                        uStack_34 = uStack_64;
                        uStack_30 = (undefined4)uStack_60;
                        uStack_2c = uStack_60._4_4_;
                        local_48 = (undefined4)local_78;
                        uStack_44 = local_78._4_4_;
                        uStack_40 = uStack_70;
                        uStack_3c = uStack_6c;
                        (*(code *)PTR_end_007996f8)();
                        return param_1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(longlong *)(param_1 + 8) = lVar1;
  *param_1 = 0xff;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::ser::SerializeMap>
            (&local_78);
  return param_1;
}


