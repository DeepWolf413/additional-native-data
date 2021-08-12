// abigail1.ysc @ L39337
void func_299()
{
  if (func_303(PLAYER::PLAYER_PED_ID()))
  {
    func_304();
    PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
    if (iLocal_154 == 0)
    {
      if (func_303(iLocal_149))
      {
        if (func_300(PLAYER::PLAYER_PED_ID(), iLocal_149, 1) < 4f || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 2f && func_300(PLAYER::PLAYER_PED_ID(), iLocal_149, 1) < 6f))
        {
          PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
          TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
          iLocal_154 = 1;
        }
      }
    }
  }
}