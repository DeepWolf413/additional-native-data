// appsecuroserv.ysc @ L34646
void func_584()
{
  PAD::ENABLE_CONTROL_ACTION(2, 201, true);
  if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
  {
    GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_612, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(201), -1f, -1f, -1f, -1f);
  }
  PAD::ENABLE_CONTROL_ACTION(2, 202, true);
  if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
  {
    GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_612, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(202), -1f, -1f, -1f, -1f);
    func_643(0);
  }
  if ((PAD::IS_CONTROL_JUST_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) && !PAD::_IS_USING_KEYBOARD(2))
  {
    func_643(0);
  }
  func_581();
  if (PAD::_IS_USING_KEYBOARD_2(2))
  {
    func_579();
    if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
    {
      func_643(0);
    }
  }
  else
  {
    func_578(1, 1);
  }
}