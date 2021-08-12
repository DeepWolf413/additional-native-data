// am_casino_peds.ysc @ L228725
int func_2510()
{
  if (PAD::GET_CONTROL_VALUE(2, 195) != 127 || PAD::GET_CONTROL_VALUE(2, 196) != 127)
  {
    return 1;
  }
  return 0;
}