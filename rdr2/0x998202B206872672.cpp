// camp_clemenspoint.ysc @ L26193
void func_869()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 9)
  {
    if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3521[iVar0]))
    {
      VOLUME::_0x998202B206872672(iLocal_3521[iVar0]);
      VOLUME::_0x6D5F9E69BA1BE783(iLocal_3521[iVar0]);
      VOLUME::_DELETE_VOLUME(iLocal_3521[iVar0]);
    }
    iVar0++;
  }
}