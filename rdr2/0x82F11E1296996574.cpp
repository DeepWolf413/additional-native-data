// rcm_gunslinger1_1.ysc @ L6751
void func_268(var uParam0)
{
  if (func_537(uParam0, "RGUN1_S1_INT"))
  {
    if (bLocal_227)
    {
      func_456(&Local_145, iLocal_71);
      PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RGUN1");
      PERSISTENCE::_0x9D16896F0DBE78A2(vLocal_138, 70f);
      bLocal_227 = false;
    }
    if (func_538(uParam0, 1))
    {
      CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
      CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
    }
    PLAYER::_0x8674D138391FFB1B(PLAYER::GET_PLAYER_INDEX(), 1);
    LAW::_0x3852237A3D9DF145(0);
    LAW::_0x82F11E1296996574(0);
  }
}