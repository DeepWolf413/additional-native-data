// am_mp_arcade.ysc @ L313592
void func_4986()
{
  if ((func_5978(PLAYER::PLAYER_ID(), 1, 1) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !func_2386(PLAYER::PLAYER_ID()))
  {
    func_274();
    if (!Global_1312436.f_6)
    {
      MISC::SET_BIT(&(Local_2554[PLAYER::PLAYER_ID() /*7*/]), false);
    }
    else
    {
      MISC::CLEAR_BIT(&(Local_2554[PLAYER::PLAYER_ID() /*7*/]), false);
    }
  }
  else
  {
    MISC::CLEAR_BIT(&(Local_2554[PLAYER::PLAYER_ID() /*7*/]), false);
  }
  if (func_4987(PLAYER::PLAYER_ID()))
  {
    HUD::DISABLE_FRONTEND_THIS_FRAME();
    HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
    if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
    {
      PAD::SET_INPUT_EXCLUSIVE(0, 200);
      PAD::SET_INPUT_EXCLUSIVE(2, 200);
    }
    PAD::DISABLE_CONTROL_ACTION(0, 200, true);
    PAD::DISABLE_CONTROL_ACTION(2, 200, true);
  }
}