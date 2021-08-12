// susan1.ysc @ L49446
bool func_1179()
{
  if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_342))
  {
    iLocal_342 = VOLUME::_CREATE_VOLUME_BOX(0f, 0f, 0f, 0f, 0f, 0f, 1.5f, 2f, 2f);
    PED::_0x7C00CFC48A782DC0(iLocal_342, iLocal_227, 1.75f, 1.5f, 0f, 0f, 0f, 0f, 2, 1);
  }
  if (VOLUME::_0x40F769D31A00D5A0(iLocal_342, Local_31.f_3) || VOLUME::_0x40F769D31A00D5A0(iLocal_342, Local_31.f_19))
  {
    return true;
  }
  return false;
}