// spd_andershelgerson.ysc @ L3560
void func_126(bool bParam0)
{
  int iVar0;

  iVar0 = func_263();
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    if (bParam0)
    {
      PATHFIND::_0x6DAD6630AE4A74CB(iVar0, 1);
      ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar0, true);
      ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar0, Global_35, true);
    }
    else
    {
      PATHFIND::_0x6DAD6630AE4A74CB(iVar0, 0);
    }
  }
}