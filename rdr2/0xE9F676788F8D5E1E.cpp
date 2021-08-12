// marston5_1.ysc @ L18109
void func_191()
{
  if (MAP::DOES_BLIP_EXIST(iLocal_19.f_29[0]))
  {
    if (MAP::_IS_BLIP_ATTACHED_TO_ANY_ENTITY(iLocal_19.f_29[0]))
    {
      MAP::_BLIP_REMOVE_MODIFIER(iLocal_19.f_29[0], -546708623);
      MAP::_BLIP_REMOVE_MODIFIER(iLocal_19.f_29[0], 231194138);
      MAP::_0x250C75EB1728CC0D(iLocal_19.f_29[0]);
    }
    else
    {
      MAP::_BLIP_REMOVE_MODIFIER(iLocal_19.f_29[0], 231194138);
    }
    MAP::REMOVE_BLIP(&(iLocal_19.f_29[0]));
  }
}