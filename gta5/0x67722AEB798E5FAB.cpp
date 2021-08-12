// arena_carmod.ysc @ L328463
void func_3025()
{
  if (Global_1590765)
  {
    if (Global_1590745 != func_3263())
    {
      if (!func_2955(Global_1590745))
      {
        if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
        {
          if (!ENTITY::DOES_ENTITY_EXIST(Local_722.f_405))
          {
            MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0.5f, false, false, false, false);
            TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
            if (((!PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_DIVING(PLAYER::PLAYER_PED_ID())) && !PED::_0x412F1364FA066CFB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
            {
              if (func_1674(&Global_1590766, 2000, 0))
              {
                if (!func_2728())
                {
                  func_2853(PLAYER::PLAYER_ID(), 1, 0, 0);
                  CAM::DO_SCREEN_FADE_IN(500);
                }
                Global_1590765 = 0;
                func_104(&Global_1590766);
              }
            }
          }
        }
      }
    }
  }
}