// 00178160 {closure#13}

/* WARNING: Switch with 1 destination removed at 0x001781d7 */
/* craggemini[b21da2d71f2da7a3]::entry::{closure#13} */

void __rustcall
craggemini[b21da2d71f2da7a3]::entry::_closure_13_(undefined4 *param_1,longlong *param_2)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_38 = param_2[1];
  local_30 = param_2[2];
  local_28 = 0;
  uStack_20 = 0;
  serde_json[dc3825464c436029]::de::from_trait::
  <serde_json[dc3825464c436029]::read::SliceRead,serde_json[dc3825464c436029]::value::Value>
            (&local_58,&local_38);
  if ((char)local_58 == -1) {
    *(undefined1 *)param_1 = 0xff;
    local_58 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                         (&uStack_50);
  }
  else {
    *(undefined8 *)(param_1 + 4) = local_48;
    *(undefined8 *)(param_1 + 6) = uStack_40;
    *param_1 = local_58;
    param_1[1] = uStack_54;
    param_1[2] = uStack_50;
    param_1[3] = uStack_4c;
  }
  if (*param_2 == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(local_58,1);
  return;
}


