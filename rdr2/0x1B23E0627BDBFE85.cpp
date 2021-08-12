// init_all_sp.ysc @ L16021
void func_326(var uParam0, var uParam1, char[32] cParam2, struct<28> Param10)
{
  func_509(uParam0, uParam1, cParam2, Param10);
  uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_510(15), &(Param10.f_10));
  if (Param10.f_24)
  {
    uParam0->f_12 = DATABINDING::_DATABINDING_ADD_HASH_ARRAY(*uParam0, func_510(32));
  }
  else
  {
    uParam0->f_12 = DATABINDING::_DATABINDING_ADD_STRING_ARRAY(*uParam0, func_510(32));
  }
  uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(30), Param10.f_18);
  uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(31), Param10.f_19);
  uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(33), Param10.f_21);
  uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_510(35), Param10.f_22);
  uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_510(34), Param10.f_22);
  uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(36), Param10.f_25);
  uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(37), Param10.f_26);
  uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(38), Param10.f_27);
}