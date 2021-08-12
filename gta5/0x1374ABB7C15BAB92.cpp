// pb_prostitute.ysc @ L18254
int func_508()
{
  struct<3> Var0;
  
  if (!func_489(iLocal_49, 4096))
  {
    if (func_414(iLocal_96, PLAYER::PLAYER_PED_ID(), 1) < 30f)
    {
      Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_96, true) };
      if ((((((EVENT::IS_SHOCKING_EVENT_IN_SPHERE(88, Var0, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(91, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(90, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(104, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(116, Var0, 30f)) || (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(114, Var0, 30f) && !func_549())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
      {
        if (!func_549())
        {
          PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_96, false);
        }
        func_481(&iLocal_49, 4096);
        return 1;
      }
    }
  }
  return 0;
}