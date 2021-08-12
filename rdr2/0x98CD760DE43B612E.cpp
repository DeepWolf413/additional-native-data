// beat_foot_robbery.ysc @ L21751
void func_717()
{
  if (func_564(iLocal_528[2], 0, 0, 0))
  {
    switch (iLocal_523)
    {
      case 1:
        PLAYER::_0xC6366A585659D15C(iLocal_698, "RE_FOOTR_VAL_V1_CALLOUT");
        break;
      case 2:
        PLAYER::_0xC6366A585659D15C(iLocal_698, "RE_FOOTR_RHD_V1_CALLOUT");
        break;
    }
    PLAYER::_0x628E742FE1F79C4A(iLocal_698, 291934926);
  }
  else
  {
    PLAYER::_0xC6366A585659D15C(iLocal_698, 0);
    PLAYER::_0x98CD760DE43B612E(iLocal_698, 0);
    PLAYER::_0x628E742FE1F79C4A(iLocal_698, 0);
  }
}