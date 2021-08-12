// abigail2_1.ysc @ L75513
void func_2172(char* sParam0, int iParam1)
{
  if (iParam1 != 0)
  {
    if (!sParam0->f_16)
    {
      StringCopy(sParam0, "default_leadin_camera", 64);
      if (func_2390(iParam1, 1))
      {
        StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_RIGHT_REQUEST", 64);
      }
      else if (func_2390(iParam1, 2))
      {
        StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_LEFT_REQUEST", 64);
      }
      else if (func_2390(iParam1, 4))
      {
        StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_CENTER_REQUEST", 64);
      }
      CAM::_0x6A4D224FC7643941(sParam0);
      sParam0->f_16 = 1;
    }
    else if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_0x927B810E43E99932(sParam0))
    {
      CAM::_0xB8B207C34285E978(sParam0);
    }
  }
}