// cheat_ui.ysc @ L558
void func_13()
{
  int iVar0;
  int iVar1;
  int iVar2;

  iVar0 = func_24(Local_9.f_4[Local_9.f_43]);
  iVar1 = func_27(iVar0);
  switch (iVar1)
  {
    case 0:
      break;
    case 1:
      DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(Local_9.f_4[Local_9.f_43], func_6(9), 0);
      break;
    case 2:
      if (!func_53(iVar0))
      {
      }
      else
      {
        iVar2 = func_33(iVar0);
        Local_9.f_44[iVar2] = 0;
        DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(Local_9.f_4[Local_9.f_43], func_6(9), 0);
      }
      default:
        break;
  }
}