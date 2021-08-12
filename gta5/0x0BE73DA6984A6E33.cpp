// am_pi_menu.ysc @ L455703
void func_6388()
{
  if (Global_2520218.f_6739 == iLocal_317)
  {
    if (NETWORK::NETWORK_IS_FRIEND(&Local_1326) || MISC::IS_ORBIS_VERSION())
    {
      func_1119("PIM_HFRQ1", 0, 0);
    }
    else if ((MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION()) || MISC::IS_PC_VERSION())
    {
      func_1119("PIM_HFRQ2", 0, 0);
    }
    else if (!NETWORK::NETWORK_IS_PENDING_FRIEND(&Local_1326))
    {
      func_1119("PIM_HFRQ2", 0, 0);
    }
    else
    {
      func_1119("PIM_HFRQ3", 0, 0);
    }
  }
  else if (Global_2520218.f_6739 == iLocal_318)
  {
    StringCopy(&(Global_2520218.f_6733), "PIM_DCREW", 24);
    StringIntConCat(&(Global_2520218.f_6733), iLocal_1305, 24);
    func_1119(&(Global_2520218.f_6733), 0, 0);
  }
}