// act_bankrobbery01.ysc @ L40155
void func_1211(int iParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, int iParam7)
{
  if (!PHYSICS::DOES_ROPE_EXIST(iParam0))
  {
  }
  else if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
  }
  else if (!PHYSICS::_0x9B4F7E3E4F9C77B3(iParam0, iParam1))
  {
    PHYSICS::_0xC64E7A62632AD2FE(iParam0, iParam1, vParam2, sParam5, iParam6, iParam7);
  }
}