// fm_capture_creator.ysc @ L58410
int func_717(var uParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (iParam1 - 1))
  {
    if (GRAPHICS::IS_DECAL_ALIVE((*uParam0)[iVar0]))
    {
    }
    else
    {
      return iVar0;
    }
    iVar0++;
  }
  return -1;
}