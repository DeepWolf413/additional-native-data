// fm_deathmatch_controler.ysc @ L319516
void func_4653(var uParam0)
{
  if (!MISC::IS_BIT_SET(uParam0->f_5, 4))
  {
    uParam0->f_58 = ENTITY::GET_ENTITY_MODEL(uParam0->f_8);
    func_4655(uParam0, &(uParam0->f_22), 1);
    MISC::SET_BIT(&(uParam0->f_5), 4);
  }
  if (MISC::IS_BIT_SET(uParam0->f_5, 6))
  {
    if (uParam0->f_22.f_2 == 0 && !NETWORK::_IS_ENTITY_GHOSTED_TO_LOCAL_PLAYER(uParam0->f_7))
    {
      MISC::SET_BIT(&(uParam0->f_5), 7);
    }
  }
  if (func_4654(uParam0) && !MISC::IS_BIT_SET(uParam0->f_5, 6))
  {
    func_4655(uParam0, &(uParam0->f_22), 0);
    MISC::SET_BIT(&(uParam0->f_5), 6);
  }
}