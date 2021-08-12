// am_mp_casino_apartment.ysc @ L368154
void func_5946()
{
  if (func_256() == 0)
  {
    if (Local_1641.f_6)
    {
      GRAPHICS::REMOVE_TCMODIFIER_OVERRIDE("MP_casino_apartment_bar");
      GRAPHICS::ADD_TCMODIFIER_OVERRIDE("MP_casino_apartment_bar", func_5947());
    }
  }
}