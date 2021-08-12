// feud1.ysc @ L82141
void func_1859(bool bParam0, vector3 vParam1)
{
  var uVar0;

  if (ENTITY::DOES_ENTITY_EXIST(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam0))
  {
    uVar0 = VEHICLE::_0x85D39F5E3B6D7EB0(vParam1);
    VEHICLE::_0x41503629D1139ABC(bParam0, uVar0, vParam1);
  }
}