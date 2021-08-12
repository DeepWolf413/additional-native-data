// fm_horde_controler.ysc @ L161370
void func_1795(int iParam0, var uParam1)
{
  bool bVar0;
  struct<3> Var1;
  struct<3> Var4;
  int iVar7;
  
  if (!*uParam1)
  {
    iVar7 = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam0);
    bVar0 = iVar7;
    if (func_2904(bVar0, 1, 1))
    {
      Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
      Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar0), true) };
      if (SYSTEM::VDIST2(Var1, Var4) <= 400f)
      {
        if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
        {
          func_1796(iParam0, "GENERIC_INSULT_HIGH", 9);
          *uParam1 = 1;
        }
        else
        {
          *uParam1 = 1;
        }
      }
    }
  }
}