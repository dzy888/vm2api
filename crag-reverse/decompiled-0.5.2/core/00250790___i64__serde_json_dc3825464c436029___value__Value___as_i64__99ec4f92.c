// 00250790 <i64,<serde_json[dc3825464c436029]::value::Value>::as_i64>

/* <core[c0acaeba6ab4c2e0]::option::Option<&serde_json[dc3825464c436029]::value::Value>>::and_then::<i64,
   <serde_json[dc3825464c436029]::value::Value>::as_i64> */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<&serde_json[dc3825464c436029]::value::Value>>::and_then::
<i64,<serde_json[dc3825464c436029]::value::Value>::as_i64>
          (char *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((param_1 != (char *)0x0) && (*param_1 == '\x02')) {
    if (*(longlong *)(param_1 + 8) == 0) {
      auVar3._0_8_ = ~*(ulonglong *)(param_1 + 0x10) >> 0x3f;
      auVar3._8_8_ = *(ulonglong *)(param_1 + 0x10);
      return auVar3;
    }
    if ((int)*(longlong *)(param_1 + 8) == 1) {
      auVar2._8_8_ = *(undefined8 *)(param_1 + 0x10);
      auVar2._0_8_ = 1;
      return auVar2;
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}


