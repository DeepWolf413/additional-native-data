// law_office_asb.ysc @ L6854
void func_243(int iParam0)
{
  switch (iParam0)
  {
    case 38:
      if (!bLocal_14)
      {
        if (CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING() > 90f)
        {
          CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
        }
        bLocal_14 = true;
      }
      CAM::_CLAMP_GAMEPLAY_CAM_YAW(-45f, 90f);
      break;
  }
}