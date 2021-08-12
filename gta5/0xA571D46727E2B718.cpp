// act_cinema.ysc @ L1680
int func_32()
{
  if (PAD::_IS_USING_KEYBOARD(2))
  {
    if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) && !PAD::IS_CONTROL_JUST_PRESSED(2, 199))
    {
      return 1;
    }
    if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
    {
      return 1;
    }
  }
  else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
  {
    return 1;
  }
  return 0;
}