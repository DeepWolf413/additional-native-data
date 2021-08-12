// gang3.ysc @ L39684
void func_922(char[4] cParam0)
{
  func_902(0, 0);
  func_1556(cParam0);
  if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_918[1], true, 0))
  {
    CAM::_0x8910C24B7E0046EC();
  }
  if (PED::_IS_PED_CLIMBING_LADDER(Global_35))
  {
    CAM::_0x718C6ECF5E8CBDD4();
  }
  func_1557(cParam0);
  LAW::_DISABLE_GUARD_ZONE("SISIKA_PENITENTIARY");
  if (func_33(cParam0) != iLocal_156)
  {
    func_1558(0);
  }
  func_1559(cParam0);
}