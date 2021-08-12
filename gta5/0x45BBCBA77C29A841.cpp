// extreme2.ysc @ L100948
void func_630(struct<3> Param0)
{
  struct<3> Var0;
  struct<3> Var3;
  
  iLocal_240 = MISC::GET_GAME_TIMER();
  if (func_856(PLAYER::PLAYER_PED_ID()) && func_448(PLAYER::PLAYER_PED_ID(), Param0, 4f))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
    {
      PED::KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID());
    }
    else if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()))
    {
      Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
      Var3 = { func_631(Param0 - Var0) };
      Var3 = { Var3 * Vector(15f, 15f, 15f) };
      PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 0, 1000, 0, false, true, false);
      ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, Var3, 0f, 0f, 1f, 0, false, true, true, false, true);
    }
  }
}