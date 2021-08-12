// agency_heist1.ysc @ L1668
void func_34(char* sParam0)
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
  {
    if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
    {
      StringCopy(&Global_77480, sParam0, 16);
      StringCopy(&Global_77484, "", 16);
      if (RECORDING::_IS_RECORDING())
      {
        RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
      }
    }
  }
}