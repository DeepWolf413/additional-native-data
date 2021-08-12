// cheat_ui.ysc @ L497
void func_10()
{
  int iVar0;
  int iVar1;
  int iVar2;

  iVar0 = 0;
  while (iVar0 <= 3)
  {
    iVar2 = iVar0;
    if (iVar2 == -1 || iVar2 == 0)
    {
      Local_9.f_93[iVar0] = -1;
    }
    else
    {
      iVar1 = func_56(iVar2);
      if (iVar1 == -1)
      {
        Local_9.f_93[iVar0] = -1;
      }
      else
      {
        Local_9.f_93[iVar0] = Local_9.f_50[iVar1];
        DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[Local_9.f_93[iVar0]], func_6(9), 1);
        DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[Local_9.f_93[iVar0]], func_6(7), 1);
        DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[Local_9.f_93[iVar0]], func_6(5), 866112557);
      }
    }
    iVar0++;
  }
}